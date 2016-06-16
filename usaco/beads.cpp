/*
ID: jomy_em1
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int n;

int left(int pos, string s){
    int count = 1;
    pos = (pos - 1);
    if (pos < 0)
     pos = n - 1;
    int prev = pos;
    pos = (pos - 1);
    if (pos < 0)
     pos = n - 1;
    for (int i = 1; i < n; ++i)
    {
        if (s[prev] == 'w')
            s[prev] = s[pos];
        if(s[pos] == s[prev] || s[pos] == 'w'){
            count++;
            if (s[pos] == 'w')
                s[pos] = s[prev];
            prev = pos;
            pos = (pos - 1);
            if (pos < 0)
             pos = n - 1;
        }
        else break;
    }
    //cout<<"left"<<" "<<count;
    return count;

}

int right(int pos, string s){
    int count = 1;
    int prev = pos;
    pos = (pos + 1)%n;
    for (int i = 1; i < n; ++i)
    {
        if (s[prev] == 'w')
            s[prev] = s[pos];
        if(s[pos] == s[prev] || s[pos] == 'w'){
            count++;
            if (s[pos] == 'w')
                s[pos] = s[prev];
            prev = pos;
            pos = (pos + 1)%n;
        }
        else break;
    }
    //cout<<"right"<<" "<<count;
    return count;
}


int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int i,max=0,current=0;
    string s;
    fin>>n;
    fin>>s;
    for (i=0; i<n; i++) {
        current = left(i,s) + right(i,s);
        if (current > max)
            max = current;
        if(max > n)
            max = n;
    }
    fout<<max<<endl;
    
    
    return 0;
}