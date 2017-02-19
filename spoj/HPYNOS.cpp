#include <iostream>
#include <map>

using namespace std;

typedef long long int ll;

ll split(ll k){
	ll sum = 0, j;
	while(k > 0){
		j = k%10;
		sum += (j*j);
		k /= 10;
	}
	// cout << sum << endl;
	return sum;
}

int main(){
	ll c = 0,k,j;
	map<ll, ll> m;
	cin >> k;
	while(1) {
		c += 1;
		j = split(k);
		if(j == 1){
			cout << c;
			break;
		}
		if(m.count(k) > 0){
			cout << -1;
			break;
		} else {
			m[k] = j;
		}
		k = j;
	}
	return 0;
}