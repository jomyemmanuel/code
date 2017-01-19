#include <iostream>

using namespace std;

int main(){
	long long i;
	cin >> i;
	while(i != 0){
		cout << (i*(i+1)*((2*i)+1))/6 << endl;
		cin >> i;
	}
	return 0;
}