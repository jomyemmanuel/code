#include <iostream>

using namespace std;

int main(){
	double H,n,i;
	long int count;
	cin >> n;
	while(n != 0){
		count = 1;
		i = 3.0;
		H = 0.5;
		while(H <= n){
			H += 1/i;
			i += 1;
			count += 1;
		}
		cout << count << " card(s)" << endl;
		cin >> n;
	}
	return 0;
}