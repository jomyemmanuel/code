#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

ll convert(string s, ll i, ll j, ll k){
	ll no = 0;
	if(k == 0){
		for( ;i <= j; i++){
			no = ((no*10) + (s[i]-'0'));
		}
	} else {
		for( ;i <= j; j--){
			no = ((no*10) + (s[j]-'0'));
		}
	}
	if(s.length() == 1) return (s[0]-'0');
	else return no;
}



int main(){
	string s;
	ll i,j,t,l,big,nine,a,b;
	cin >> t;
	while(t--){
		cin >> s;
		nine = 0;
		l = s.length();
		for(i = 0; i < l; i++){
			if(s[i] != '9'){
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
		if(l%2 == 0){
			a = convert(s,l/2,l-1,0);
			b = convert(s,0,l/2-1,1);
			if(b > a){			
				for(i = 0; i < l/2; i++){
					cout << s[i];
				}
				for(i = l/2-1; i >= 0; i--){
					cout << s[i];
				}
				cout << endl;
			} else {
				for(i = 0, j = l-1; i < j; i++, j--){
					s[j] = s[i];
				}
				for(i = l/2-1, j = l/2; i >= 0, j < l; i--, j++){
					if(s[i] == '9'){ 
						s[i] = s[j] = '0';
						continue;
					}
					big = max(s[i]-'0',s[j]-'0');
					if(s[i] == s[j])
						s[i] = s[j] = (big+'1');
					else s[i] = s[j] = (big+'0');
					break;
				}
				cout << s << endl;
			}
		} else {
			a = convert(s,l/2+1,l-1,0);
			b=  convert(s,0,l/2-1,1);
			if(b > a){			
				for(i = 0; i <= l/2; i++){
					cout << s[i];
				}
				for(i = l/2-1; i >= 0; i--){
					cout << s[i];
				}
				cout << endl;
			} else {
				for(i = 0, j = l-1; i < j; i++, j--){
					s[j] = s[i];
				}
				for(i = l/2, j = l/2; i >= 0, j < l; i--, j++){
					if(s[i] == '9'){
						s[i] = s[j] = '0';
						continue;
					}
					big = max(s[i]-'0',s[j]-'0');
					if(s[i] == s[j])
						s[i] = s[j] = (big+'1');
					else s[i] = s[j] = (big+'0');
					break;
				}
				cout << s << endl;
			}
		}
	}
	return 0;
}