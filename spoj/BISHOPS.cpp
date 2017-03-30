#include <string>
#include <iostream>

using namespace std;

int main(){
	long int i,j = 0,l,a[110],k;
	string s;
	while(cin >> s){
		l = s.length();
		if(l == 1 && s[l-1] == '1'){
			cout << 1 << endl;
			continue;
		}
		for(i = l-1; i >= 0; i--){
			a[i+1] = (s[i]-'0');
		}
		a[0] = 0;
		if(a[l] >= 5) k = 1;
		else k = 0;
		a[l] = (2*a[l])%10;
		for(i = l-1; i >= 0; i--){ 
			if(a[i] >= 5) j = 1;
			else j = 0;
			a[i] = ((2*a[i])%10 + k);
			k = j;
		}
		if(a[l] == 0){
			i = l-1;
			a[l] = 8;
			while(i >= 0 && a[i] == 0){
				a[i] = 9;
				i--;
			}
			a[i] = a[i] - 1;
		} else {
			a[l] = a[l] - 2;
		}
		for(i = 0; i <= l; i++){
			if(a[i] != 0) break;
		}
		while(i <= l){
			cout << a[i];
			i++;
		}
		cout << endl;
	}
	return 0;
}