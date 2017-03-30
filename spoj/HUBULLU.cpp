#include <iostream>

using namespace std;

typedef long long int lli;

int main(){
	lli t,n,j;
	cin >> t;
	while(t--){
		cin >> n >> j;
		if(j == 0) cout << "Airborne wins." << endl;
		else cout << "Pagfloyd wins." << endl;
	}
	return 0;
}