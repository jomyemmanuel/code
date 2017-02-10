#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	long int i,j,t,l1,l2;
	vector<vector<long int> > v(2002,vector<long int>(2002));
	for(i = 0; i < 2001; i++){
			v[0][i] = i;
			v[i][0] = i;
	}
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		l1 = a.length();
		l2 = b.length();
		for(i = 1; i <= l1; i++){
			for(j = 1; j <= l2; j++){
				if(a[i-1] == b[j-1]){
					v[i][j] = v[i-1][j-1];
				} else {
					v[i][j] = 1 + min(min(v[i-1][j-1], v[i-1][j]),v[i][j-1]);
				}
			}
		}
		cout << v[l1][l2] << endl;
	}
	return 0;
}