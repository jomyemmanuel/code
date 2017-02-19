#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	long int i,a,b,t;
	cin >> a >> b;
	while(a != -1 && b != -1){
		if(a == 0 && b == 0){			
			cout << 0 << endl;
		} else if(a == b){			
			cout << 1 << endl;
		} else {
			cout << ceil((max(a,b)*1.0)/(min(a,b)+1)) << endl;
		}
		cin >> a >> b;
	}
	return 0;
}