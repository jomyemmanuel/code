#include <cstdio>

using namespace std;

int main(){
	long long int i,j,k,l,t,n,d,a;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld%lld%lld", &j,&k,&l);
		n = ((2*l)/(j+k));
		d = ((k-j)/(n-5));
		a = (j-(2*d));
		printf("%lld\n", n);
		j = a;
		for(i = 0; i < n; i++){
			printf("%lld ", j);
			j += d;
		}		
		printf("\n");
	}
	return 0;
}