#include <iostream>

using namespace std;

int main(){
	long long int i,j,t,k,st,num,den;
	cin >> t;
	while(t--){
		cin >> k;
		i = 0;
		j = 0;
		while(i < k){
			j++;
			st = i;
			i = ((j*j)+j)/2;
		}
		num = 1;
		den = j;
		for(i = st+1; i < k; i++){
			num++;
			den--;
		}
		if(j%2 == 0){
			cout << "TERM " <<  k << " IS " << num << "/" << den << endl;
		} else {
			cout << "TERM " <<  k << " IS " << den << "/" << num << endl;
		}
	}
	return 0;
}