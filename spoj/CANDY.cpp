#include <iostream>

using namespace std;

int main(){
	long int i,j,sum,n,a[10007],moves;
	cin >> n;
	while(n != -1){
		sum = 0;
		moves = 0;
		for(i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		if(sum % n == 0){
			j = sum/n;
			for(i = 0; i < n; i++){
				if(a[i] < j) moves += (j-a[i]);
			}
			cout << moves << endl;
		} else {
			cout << -1 << endl;
		}
		cin >> n;
	}
	return 0;
}