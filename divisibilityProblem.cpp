#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<"\n";
        }
        else if(a==b){
            cout<<0<<endl;
        }
        else{
            if(a%b==0){
                cout<<0<<"\n";
            }
            else{
                int q=a/b;
                int div=q+1;
                int num=b*div;
                int ans=num-a;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}