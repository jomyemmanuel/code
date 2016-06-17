#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int  a,b,c,n,t,ans;
    cin>>t;
    while(t--){
        a=1; b=2;c=3;
        cin>>n;
        ans = 2;
        while(c<=n){
            if(c%2==0)
                ans+=c;
            a=b; b=c;
            c=a+b;
        } 
        cout<<ans<<endl;
    }
    return 0;
}
