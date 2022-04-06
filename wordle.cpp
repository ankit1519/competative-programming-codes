#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string S,T,ans="";
    cin>>t;
    while(t--){
        cin>>S>>T;
        for(int i=0;i<5;i++){
            if(S[i]==T[i]){
                ans+='G';
            }else{
                ans+='B';
            }
        }
        cout<<ans;
        cout<<endl;
        ans="";
    }
}