#include <iostream>
#include <vector>
#include <string>

using namespace std;

void array(vector< vector<int> > &v, string s, int k){
	int i = 1, j = 0; 
	v[k][0] = 0;
	while(i < s.length()){
		if(s[i] == s[j]) {
			v[k][i] = j+1;
			i++;
			j++;
		} else {
			if(j > 0) j = v[k][j-1];
			else {
				v[k][i] = 0;
				i++;
			}
		}
	}
}

void kmp(string s, string pat, vector< vector<int> > &v, int &ans, int k){
	int i = 0,j = 0;
	while(i < s.length()){
		if(s[i] == pat[j]){
			i++;
			j++;
			if(j == pat.length()){
				ans++;
				j = v[k][j-1];
			}
		} else {
			if(j > 0) j = v[k][j-1];
			else i++;
		}
	}
}

int main(){
	int i,n,t,ans;
	string pat[8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT","HHH"};
	vector< vector<int> > v(8, vector<int>(3,0));
	for(i = 0; i < 8; i++){
		array(v,pat[i],i);
	}
	string s;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		cout  << n;
		for(i = 0; i < 8; i++){
			ans = 0;
			kmp(s,pat[i],v,ans,i);
			cout << " " << ans;
		}
		cout << endl;
	}
	return 0;
}