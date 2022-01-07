#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    
    for(int i=1;i<INT_MAX;i++){
        int num=k*i;
        if(num%10==0 ||num%10==r){
            cout<<i;
            return 0;
        }
    }
}