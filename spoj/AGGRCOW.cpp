#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long int lli;

int main(){
	lli t,n,i,c,j,k,lo,hi,mid,min;
	cin >> t;
	while(t--){
		cin >> n >> c;
		vector<lli> v(n,0);
		for(i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		lo = v[0];
		hi = v[n-1];
		min = -1;
		while(lo <= hi){
			mid = (lo + hi)/2;
			j = 1; k = v[0];
			for(i = 1; i < n; i++){
				if((v[i] - k) >= mid){
					j++;
					k = v[i];
				}
				if(j == c) break;
			}
			if(j < c) hi = mid-1;
			else lo = mid+1;
			if(mid > min && j == c) min = mid;
		}
		cout << min << endl;
	}
	return 0;
}