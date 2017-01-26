#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long int i,j,sum = 0,n;
	cin >> n;
	j = sqrt(n);
	for(i = 1; i <= j; i++) {
		sum += ((n/i)-i+1);
	}
	cout << sum;
	return 0;
}