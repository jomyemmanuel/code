#include <iostream>

using namespace std;

int main(){
	long long i,j,k;
	cin >> i >> j >> k;
	while(1){
		if(i == 0 && j ==0 && k == 0) break;
		if((j-i) == (k-j)){
			cout << "AP " << k+(k-j) << endl;
		} else {
			cout << "GP " << (k/j)*k << endl;
		}
		cin >> i >> j >> k;
	}
	return 0;
}