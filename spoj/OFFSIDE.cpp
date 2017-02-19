#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long int ll;

int main(){
	ll i,j,k,small;
	vector<ll> v1(10001), v2(10001);
	cin >> i >> j;
	while(i != 0 && j != 0){
		small = 10001;
		for(k = 0; k < i; k++){
			cin >> v1[k];
			if(v1[k] < small) small = v1[k];
		}
		for(k = 0; k < j; k++){
			cin >> v2[k];
		}
		sort(v2.begin(), v2.begin()+j);
		if((v2.size() > 1 && small >= v2[0] && small >= v2[1]) || (v2.size() > 1 && small >= v2[1])) {
			cout << "N" << endl;
		} else {
			cout << "Y" << endl;
		}
		cin >> i >> j;
	}
	return 0;
}