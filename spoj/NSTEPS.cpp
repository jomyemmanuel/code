#include <iostream>

using namespace std;

typedef long long ll;

void graph(ll m, ll n) {
	if ((m%2 == 0) && (n%2 == 0) && (m == n)) {
		cout << (m+n) << endl;
	} else if ((m%2 != 0) && (n%2 != 0) && (m == n)) {
		cout << (m+n-1) << endl;
	} else if ((m%2 == 0) && (n%2 == 0) && (m-n == 2)) {
		cout << (m+n) << endl;
	} else if ((m%2 != 0) && (n%2 != 0) && (m-n == 2)) {
		cout << (m+n-1) << endl;
	} else {
		cout << "No Number" << endl;
	}
}

int main(){
	ll t,m,n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		graph(m,n);
	}
	return 0;
}