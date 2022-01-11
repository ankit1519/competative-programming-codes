#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char ch;
    for(int i=0;i<m*n;i++){
        cin>>ch;
    
    if(ch=='C'||ch=='M'||ch=='Y'){
        cout<<"#Color";
        return 0;
    }
    }
    cout<<"#Black&White";
    return 0;
}