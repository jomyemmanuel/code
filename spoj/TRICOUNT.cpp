#include <iostream>

using namespace std;

int main(){
	unsigned long long int i,t,n,up,down;
	cin >> t;
	while(t--){
		cin >> n;
		up  = (n*(n+1)*(n+2))/6;
		if(n%2 == 0){
			n /= 2;
			down = ((n*(n+1)*((2*n)+1))/3 - (n*(n+1))/2);
		} else {
			n /= 2;
			down = ((n*(n+1)*((2*n)+1))/3 + (n*(n+1))/2);
		}
		cout << (up+down) << endl;
	}
	return 0;
}