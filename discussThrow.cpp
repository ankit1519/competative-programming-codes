#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        int m=max(x,(max(y,z)));
        cout<<m<<endl;
    }
}