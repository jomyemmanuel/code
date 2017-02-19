#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef  long long int ll;
ll c,r;

ll compute(ll i, ll j, vector< vector< ll > > &v, vector< vector< ll > > &map, ll sum){
	if(i >= r || i < 0 || j >= c || j < 0) return 0;
	if(map[i][j] > 0){
		return map[i][j];
	}
	map[i][j] += (v[i][j] + max(compute(i+1,j-1,v,map,sum), max(compute(i+1,j,v,map,sum), compute(i+1,j+1,v,map,sum))));
	return map[i][j];
}


int main(){
	ll i,j,t,temp,sum;
	vector< vector< ll > > v(100,vector< ll >(100)), map(100,vector< ll >(100));
	scanf("%lld", &t);
	while(t--){
		sum = -1;
		scanf("%lld%lld", &r,&c);
		for(i = 0; i < 100; i++){
			for(j = 0; j < 100; j++){
				map[i][j] = 0;
			}
		}
		for(i = 0; i < r; i++){
			for(j = 0; j < c; j++){
				scanf("%lld", &v[i][j]);
			}
		}
		for(i = 0; i < c; i++){
			temp = compute(0,i,v,map,0);
			if(temp > sum) sum = temp;
		}		
		printf("%lld\n", sum);
	}
	return 0;
}