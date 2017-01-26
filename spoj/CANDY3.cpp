#include <iostream>

using namespace std;

int main(){
	unsigned long long int i,j,k,t,sum,n,l;
	string s;
	char c;
	cin >> t;
	while(t--){
		sum = 0;
		k = 0;		
		cin >> n;
		j = n;
		while(n--) {
			cin >> l;
			sum = (sum%j + l%j)%j;
		}
		if(sum%j == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}