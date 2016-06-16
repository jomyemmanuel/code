/*
ID: jomy_em1
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>

using namespace std;

int leap(int year){
    if (year%4 ==0) {
        if(year%100 == 0){
            if(year%400 == 0)
                return 29;
            else
                return 28;
        }
        else {
            return 29;
        }
    }
    else {
        return 28;
    }
}
// m=1,p=mon; m=2,p=tue; m=3,p=wed; m=4,p=thu; m=5,p=fri; m=6,p=sat; m=7,p=sun; m=8,p=mon
int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int i,j,n,k,m,p=0;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30 ,31};
    int b[7] = {0};
    fin>>n;
    j = 1900 + n - 1;
    for (i=1900; i<=j; i++) {
        a[1] = leap(i);
        for (k=0; k<12; k++){
            for (m=1; m<=a[k]; m++){
                if(m == 13)
                    b[p]++;
                p = (p+1)%7;
            }
        }
    }  
    fout<<b[5]<<" "<<b[6];
    for (i = 0; i < 5; ++i)
      {
          fout<<" "<<b[i];
      }
      fout<<endl;  
    
    return 0;
}