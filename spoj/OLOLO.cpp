#include <cstdio>

using namespace std;

int main(){
	long long int i,j,k = 0;
	scanf("%lld", &j);
	while(j--){
		scanf("%lld", &i);
		k ^= i;
	}
	printf("%lld", k);
	return 0;
}