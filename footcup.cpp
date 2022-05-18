#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num--){
        int t1,t2;
        cin>>t1>>t2;
        if(t1==t2 && t1>0 &&t2>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}