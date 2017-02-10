#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main(){
	ll t,i,j,b,no,len,a;
	string c;
	vector < vector<ll> > v(9, vector<ll>());
	for(i = 0; i < 9; i++){
		v[i].push_back(i+1);
		j = 0;
		while((v[i][j]*v[i][0])%10 != v[i][0]%10){
			v[i].push_back((v[i][0]*v[i][j++])%10);
		}
	}
	cin >> t;
	while(t--){
		cin >> c >> b;
		len = c.length();
		a = (c[len-1]-'0')%10;
		if(a == 0 || b == 0){
			cout << (a == 0? 0:1) << endl;
			continue;
		}
		if(v[a-1].size() == 1) cout << v[a-1][0] << endl;
		else {
			ll mod = b%v[a-1].size();
			if(mod == 0) no = v[a-1][v[a-1].size()-1];
			else no = v[a-1][mod-1];
			cout << no << endl;			
		}
	}
	return 0;
}