#include <iostream>

using namespace std;

int main(){
	int i,j,t,k;
	cin >> t;
	while(t != 0){
		string s;
		cin >> s;
		for(i = 0; i < t; i++){
			for(j = i, k = ((2*t)-1-i); j < s.length(); j += (2*t), k += (2*t)){
				cout << s[j];
				if(k < s.length()) cout << s[k];
			}
		}
		cin >> t;
		cout << "\n";
	}
	return 0;
}