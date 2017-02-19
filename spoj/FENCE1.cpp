#include <iostream>
#include <cstdio>

using namespace std;

const float PI = 3.14159;

int main(){
	long int i,l;
	double j;
	cin >> l;
	while(l != 0){	
		j = (l*l)/(2*PI);
		printf("%0.2lf\n", j);
		cin >> l;
	}
	return 0;
}