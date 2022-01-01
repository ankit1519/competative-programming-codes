#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    int num=0;
    int num1=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        num=b-a;
        num1=num1+num;
        if(num1>ans){
            ans=num1;
        }
    }
    cout<<ans;
}