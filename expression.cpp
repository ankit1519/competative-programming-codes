#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int oo=a*b*c;
    int ot=a*(b+c);
    int oth=a*b*c; 
    int of=(a+b)*c; 
    int ofv=a+b+c; 
    int s=a*b+c;
    int ans=oo;
    ans=max(ans,ot);
    ans=max(ans,oth);
    ans=max(ans,of);
    ans=max(ans,ofv);
    ans=max(ans,s);
    cout<<ans;
    return 0;
}