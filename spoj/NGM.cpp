#include <iostream>

using namespace std;

int main(){
	long long int i,j;
	cin >> j;
	if(j%10 != 0){
		cout << 1 << endl << (j%10);
	} else {
		cout << 2 ;
	}
	return 0;
}