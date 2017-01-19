#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long ll;

void primes(ll m, ll n) {
	ll i,j,k,root = floor(sqrt(n)) + 1;
	ll numbers[n-m+1];
	for (i = m; i <= n; ++i) {
		numbers[i-m] = 1;
	}
	for(i = 2; i < root; i++) {
		k = (floor(m/i))*i;
		if(k == 1) continue;
		if(k < m ) k += i;
		if(k == i) k += i;
		for (j = k; j <= n; j+=i) {
			numbers[j-m] = 0;
		}
	}
	for (i = m; i <= n; i++) {
		if(numbers[i-m] == 1 && i != 1) {
			cout << i << endl;
		}
	}
}

int main(){
	ll i,j,t,m,n;
	cin>>t;
	while(t--){
		cin>>m>>n;
		primes(m, n);
		cout << endl;
	}
	return 0;
}