#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }else{
        int a=n%10;
        n/=10;
        int r1=n;
        int b=n%10;
        if(a<b){
           cout<< r1;
        }else{
            cout<<r1-b+a;
        }
    }
}