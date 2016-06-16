/*
ID: jomy_em1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct data{

	string s;
	int give;
	int take;
};

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int i,j,np,x,y,z;
    string b;
    fin>>np;
    data a[np];
    for(i=0;i<np;i++){
    	fin>>a[i].s;
    	a[i].give=0;
    	a[i].take=0;
    }

    for(i=0;i<np;i++){
    	fin>>b;
    	for(j=0;j<np;j++)
    		if(b==a[j].s)
    			break;
    	fin>>a[j].give;
    	fin>>x;
        if(x!=0){
            y=a[j].give % x;
            z=a[j].give / x;
    	    a[j].take += y;
        }
    	while(x--){
    		fin>>b;
    		for(j=0;j<np;j++)
    			if(b==a[j].s)
    				break;
    		a[j].take+=z;
    	}
    	// while(y--){
    	// 	fin>>b;
    	// 	for(j=0;j<np;j++)
    	// 		if(b==a[j].s)
    	// 			break;
    	// 	a[j].take=0;
    	// }
    }
    for(i=0;i<np;i++){
    	fout<<a[i].s<<" "<<a[i].take - a[i].give<<endl;
    	
    }
    
    return 0;
}