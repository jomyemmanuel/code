#include <iostream>
#include <vector>

using namespace std;

typedef long long int ll;

ll cal(ll m){
	return (1 + (3*m*(m+1)));
}

int main(){
	ll i,j,k,m,flag,x;
	vector<ll> v(18259);
	for(i = 0; i <= 18258; i++){
		v[i] = cal(i);
	}
	cin >> k;
	while(k != -1){
		i = 0;
		j = 18258;
		flag = 0;
		while(i <= j){
			m = (i+j)/2;
			x = v[m];
			if(k == x){
				flag = 1;
				break;
			} else if(k > x){
				i = (m+1);
			} else {
				j = (m-1);
			}
		}
		if(flag == 0) cout << "N" << endl;
		else cout << "Y" << endl;
		cin >> k;
	}
	return 0;
}