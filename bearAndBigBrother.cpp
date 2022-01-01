#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count;
    cin>>a>>b;
    count=0;
    while(b>=a){
        a=3*a;
        b=2*b;
        count++;
    }
    cout<<count<<endl;
}