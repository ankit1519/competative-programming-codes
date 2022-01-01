#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int num=1;
    int cost;
    int col=0;
    for(int i=0;i<w;i++){
        cost=k*num;
        col+=cost;
        num++;
    }
    int ans=col-n;
    if(ans>0){
    cout<<ans<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}