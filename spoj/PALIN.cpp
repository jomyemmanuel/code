#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int i,j,t,flag,l,big,nine;
	char c;
	cin >> t;
	while(t--){
		cin >> s;
		flag = 0;
		nine = 0;
		l = s.length();
		for(i = 0, j = l-1; i <= j; i++, j--){
			if(s[i] != s[j]){
				flag = 1;
				big = max(s[i]-'0',s[j]-'0');
				s[i] = s[j] = (big+'0');
			}
			if(s[i] != '9'  || s[j] != '9'){
				nine = 1;
			}
		}
		if(nine == 0){
			cout << 1;
			for (i = 0; i < l-1; i++){
				cout << 0;
			}
			cout << 1 << endl;
			continue;
		}
		if(flag == 0){
			if(l%2 == 0){
				for(i = l/2-1, j = l/2; i >= 0, j < l; i--, j++){
					if(s[i] == '9') continue;
					big = max(s[i]-'0',s[j]-'0');
					s[i] = s[j] = (big+'1');
					break;
				}
			} else {
				for(i = l/2, j = l/2; i >= 0, j < l; i--, j++){
					if(s[i] == '9') continue;
					big = max(s[i]-'0',s[j]-'0');
					s[i] = s[j] = (big+'1');
					break;
				}
			}			
		}
		cout << s << endl;
	}
	return 0;
}