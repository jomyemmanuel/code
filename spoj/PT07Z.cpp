#include <cstdio>
#include <vector>

using namespace std;
typedef long long ll;

vector<vector<ll> > graph(10001);
vector<bool> visit(10001, false);
ll maximum = 0, depth = 0, n, node = 0;

void find_longest(ll i, ll sum){
	ll j;
	visit[i] = true;
	if(sum > maximum)
		maximum = sum;
	for(j = 0 ; j < graph[i].size(); j++){
		if(visit[graph[i][j]] == false){
			find_longest(graph[i][j], sum+1);
		}
	}
}

void max_depth(ll i, ll sum){
	ll j;
	visit[i] = true;
	if(sum > depth){
		depth = sum;
		node = i;
	}
	for(j = 0 ; j < graph[i].size(); j++){
		if(visit[graph[i][j]] == false){
			max_depth(graph[i][j], sum+1);
		}
	}
}


int main(){
	ll i,j,k;
	scanf("%lld", &n);
	for(i = 1; i < n; i++){
		scanf("%lld%lld", &j, &k);
		graph[k].push_back(j);
		graph[j].push_back(k);
	}
	for(i = 1; i <= n; i++){
		max_depth(i,0);
		if(node != 0) break;
	}
	for(i = 1; i <= n; i++){
		visit[i] = false;
	}
	find_longest(node, 0);
	printf("%lld", maximum);
	return 0;
}