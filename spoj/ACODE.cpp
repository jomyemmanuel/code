#include <iostream>
#include <map>
#include <string>

using namespace std;

int rec(int j, map<int, int> &m, string s, int k){
	if(j > s.length()){
		return 0;
	}
	if(k == 0 && s[j-1] == '0') return 0;
	if(k == 1){
		int no = (((s[j-2]-'0')*10)+(s[j-1]-'0'));
		if(no < 10 || no > 26) return 0;
	}
	if(m.count(j) > 0){
		return m[j];
	}
	if(j == s.length()){
		return 1;
	}
	return m[j] = rec(j+1,m,s,0) + rec(j+2,m,s,1);
}

int main(){
	int i,j;
	string s,t;
	t.assign("0");
	cin >> s;
	while(s.compare(t) != 0){
		map<int, int> m;
		cout << rec(0,m,s,0) << endl;
		cin >> s;
	}
	return 0;
}