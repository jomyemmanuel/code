#include <iostream>

using namespace std;

int main(){
	long long int i,a,b,t,ans;
	char c;
	cin >> t;
	while(t--){
		cin >> a >> c >> b;
		ans = a;
		while(1){
			if(c == '+'){
				ans += b;
			} else if(c == '-'){
				ans -= b;
			} else if(c == '*'){
				ans *= b;
			} else {
				ans /= b;
			}
			cin >> c;
			if(c == '=') break;
			cin >> b;
		}
		cout << ans << endl;
	}
	return 0;
}