#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long long int i,k,j,t,n,sum;
	cin >> t;
	for(k = 1; k <= t; k++){
		cin >> j >> n;
		sum = 0;
		vector<int> v(n);
		for(i = 0; i < n; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());
		for(i = 0; i < n; i++){
			sum += v[i];
			if(sum >= j){
				break;
			}
		}
		if(i == n){
			cout << "Scenario #" << k << ":\n" << "impossible" << "\n\n";
		} else {
			cout << "Scenario #" << k << ":\n" << i+1 << "\n\n";
		}
		
	}
	return 0;
}