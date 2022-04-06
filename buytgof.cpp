#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,x;
        cin>>n>>x;
        int nd=n/3;
        int nm=n-nd;
        int res=nm*x;
        cout<<res<<endl;
    }
    return 0;
}