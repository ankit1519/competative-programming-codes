#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<6){
            cout<<0<<endl;
        }else if(n==6){
            cout<<1<<endl;
        }else{
            n=n/7;
        }
            cout<<n<<endl;

    }
}