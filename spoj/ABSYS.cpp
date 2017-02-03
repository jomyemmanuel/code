#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){
	int i,k,n,no,flag;
	char j;
	char a[3][100];
	cin >> n;
	while(n--){
		flag = -1;
		cin >> a[0] >> j >> a[1] >> j >> a[2];
		for(i = 0; i < 3; i++){
			for(k = 0; k < strlen(a[i]); k++){
				if(a[i][k] < '0' || a[i][k] > '9'){
					flag = i;
					break;
				}
				if(flag != -1) break;
			}
		}
		if(flag == 0){
			no = atoi(a[2]) - atoi(a[1]);
			cout << no << " + " << a[1] << " = " << a[2] << endl;
		} else if(flag == 1) {
			no = atoi(a[2]) - atoi(a[0]);
			cout << a[0] << " + " << no << " = " << a[2] << endl;
		} else {
			no = atoi(a[0]) + atoi(a[1]);
			cout << a[0] << " + " << a[1] << " = " << no << endl;
		}
	}
	return 0;
}