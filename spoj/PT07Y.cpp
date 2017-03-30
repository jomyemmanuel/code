#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

ll root(ll i, vector<ll> &a){
	while(i != a[i]){
		a[i] = a[a[i]];
		i = a[i];
	}
	return a[i];
}

ll union_find(ll j, ll k, vector<ll> &a, vector<ll> &size){
	ll x = root(j,a);
	ll y = root(k,a);
	if(x == y) return -1;
	if(size[x] > size[y]){
		a[y] = x;
		size[x] += size[y];
	} else {
		a[x] = y;
		size[y] += size[x];
	}
	return 1;
}

int main(){
	ll i,j,k,n,m, val = 1;
	vector<ll> a(10001), size(10001);
	for(i = 0; i < 10001; i++){
		a[i] = i;
		size[i] = 1;
	}
	scanf("%lld%lld", &n, &m);
	for(i = 0; i < m; i++){
		scanf("%lld%lld", &j, &k);
		if(val == 1){
			val = union_find(j,k,a,size);
		}
	}
	j = *max_element(size.begin(), size.begin()+n);
	if(j == n && val == 1) printf("YES");
	else  printf("NO");
	return 0;
}