#include <iostream>
#include <stack>
#include <map>
#include <ctype.h>

using namespace std;

int main(){
	string s;
	int t,i,j;
	map <char, int> m;
	m['+'] = 0; m['-'] = 1; m['*'] = 2; m['/'] = 3; m['^'] = 4; 
	cin >> t;
	while(t--){
		stack <char> st;
		cin >> s;
		for(i = 0; i < s.length(); i++){
			if(s[i] == '('){
				st.push('(');
			} else if(s[i] == ')'){
				while(!st.empty() && st.top() != '('){
					cout << st.top();
					st.pop();
				}
				st.pop();
			} else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
				while(!st.empty() && st.top() != '(' && m[s[i]] <= m[st.top()]){
					cout << st.top();
					st.pop();
				}
				st.push(s[i]);
			} else {
				cout << s[i];
			}
		} 
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
	return 0;
}