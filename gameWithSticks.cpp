#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    int p=n*m;
    while(p>=0){
        p-=n+m-1;
        n--;
        m--;
        count++;
    }
    count++;
    if(count%2==0){
        cout<<"Malvika"<<endl;
    }else{
        cout<<"Akshat"<<endl;
    }
}