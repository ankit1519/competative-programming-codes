#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z,xt=0,yt=0,zt=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        xt+=x;
        yt+=y;
        zt+=z;
    }
    if(xt==0 && yt==0 && zt==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}