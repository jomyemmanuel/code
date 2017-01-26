#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t,i,sum,k;
	cin >> t;
	while(t--){
		sum = 0;
		cin >> k;
		vector <int> m(k),n(k);
		for(i = 0; i < k; i++) cin >> m[i];
		for(i = 0; i < k; i++) cin >> n[i];
		sort(m.begin(), m.end());
		sort(n.begin(), n.end());
		for(i = 0; i < k; i++) sum += (m[i]*n[i]);
		cout << sum << endl;
	}
	return 0;
}