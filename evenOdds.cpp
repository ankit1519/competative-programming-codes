#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,ans;
    cin>>n>>k;
    if(k<=(n+1)/2){
        ans=k*2-1;
    }else{
        ans=(k-(n+1)/2)*2;
    }
    cout<<ans;
}