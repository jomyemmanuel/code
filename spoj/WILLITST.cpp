#include <iostream>

using namespace std;

int main(){
	unsigned long long i,j;
	cin >> j;
	if((j & j-1) == 0) cout << "TAK";
	else cout << "NIE";
	return 0;
}