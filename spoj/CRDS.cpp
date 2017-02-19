#include <iostream>

using namespace std;

long long int mod = 1000007;

int main(){
	long long int i,j,t;
	cin >> t;
	while(t--){
		cin >> j;
		i = (j*(j+1))/2;
		i = (i*3) - j;
		cout << i%mod << endl;
	}
	return 0;
}