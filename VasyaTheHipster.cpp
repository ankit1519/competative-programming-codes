#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<a<<" "<<0;
    }
    else if(a>b){
        cout<<b<<" ";
        cout<<(a-b)/2;
    }
    else if(a<b){
        cout<<a<<" ";
        cout<<(b-a)/2;
    }
}