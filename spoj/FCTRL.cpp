#include <iostream>

using namespace std;

typedef long long ll;

void zeroes(ll m) {
	ll j = 5,k = 0;
	while(j <= m){
		k += (m/j);
		j *= 5;
	}
	cout << k << endl;
}

int main(){
	ll t,m;
	cin >> t;
	while(t--){
		cin >> m;
		zeroes(m);
	}
	return 0;
}