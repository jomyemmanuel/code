#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

typedef unsigned long long ll;

ll compute(ll n, map<ll,ll> &v){
	if(n < 0){
		return 0;
	}
	if(v.count(n) > 0){
		return v[n];
	}
	return v[n] = max(n, compute((n/2),v) + compute((n/3),v) + compute((n/4),v));
}

int main(){
	map<ll,ll> v;
	ll i,n;
	v[0] = 0; v[1] = 1; v[2] = 2; v[3] = 3; v[4] = 4;
	// for(i = 5; i < 500000000; i++){
	// 	v[i] = max(i, ((i/2) + (i/3) + (i/4)));
	// }
	while( scanf("%lld", &n) != EOF){
		cout << compute(n,v) << endl;
	}
	return 0;
}