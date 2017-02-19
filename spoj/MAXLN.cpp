#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

typedef long long int ll;

int main(){
	ll i,t,r;
	double AB2,AC;
	cin >> t;
	for(i = 0; i < t; i++){
		cin >> r;
		AB2 = (4*r*r) - (0.25);
		AC = sqrt((4*r*r)-(AB2));
		printf("Case %lld: %.2lf\n", (i+1), (AB2 + AC));
	}
	return 0;
}