/*
ID: jomy_em1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    int i,l,k,x=1,y=1;
    fin >> a >> b;
    l=a.length();
    k=b.length();
    for(i=0;i<l;i++)
    	x*=((a[i]-'A')+1);
    for(i=0;i<k;i++)
    	y*=((b[i]-'A')+1);
    if(x%47 == y%47)
    	fout << "GO" << endl;
    else
    	fout << "STAY" << endl;
    return 0;
}