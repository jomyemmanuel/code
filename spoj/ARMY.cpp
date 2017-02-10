#include <iostream>

using namespace std;

int main(){
	long long int i,j,t,m,n,l1,l2;
	cin >> t;
	while(t--){
		cin >> m >> n;
		l1 = -1;
		l2 = -1;
		for(i = 0; i < m; i++){
			cin >> j;
			if(j > l1) l1 = j;
		}
		for(i = 0; i < n; i++){
			cin >> j;
			if(j > l2) l2 = j;
		}
		if(l1 >= l2) cout << "Godzilla" << endl;
		else cout << "MechaGodzilla" << endl;

	}
	return 0;
}