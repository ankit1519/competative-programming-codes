#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        if(x%10==0){
            cout<<x/10<<endl;
        }else if(x%5==0){
            cout<<(x/10)+1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}