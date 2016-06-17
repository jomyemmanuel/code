#include <iostream>

using namespace std;

int main(){
	unsigned long long int i,n,t,ans;
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		if(n%3 == 0)
			i= n/3 -1;
		else i= n/3;
		ans = (3*(i*(i+1)))/2;
		if(n%5 == 0)
			i= n/5 -1;
		else i= n/5;
		ans += (5*(i*(i+1)))/2;
		if(n%15 == 0)
			i= n/15 -1;
		else i= n/15;
		ans -= (15*(i*(i+1)))/2;
		cout<<ans<<endl;
	}
	return 0;
}