#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        if(n==0){
            cout<<1<<endl;
        }else{
            cout<<(n*1)+(m*2)+1<<endl;
        }
        
    }
    return 0;
}