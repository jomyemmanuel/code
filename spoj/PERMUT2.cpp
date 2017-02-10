#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long int i,j,n,a[100001],b[100001];
	cin >> n;
	while(n != 0){
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			b[a[i]-1] = i+1;
		}
		for(i = 0; i < n; i++){
			if(a[i] != b[i]) break;
		}

		if(i != n) cout << "not ambiguous" << endl;
		else cout << "ambiguous" << endl;	
		cin >> n;	
	}
	return 0;
}