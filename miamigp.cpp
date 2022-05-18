#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num--){
        int ft,ct;
        cin>>ft>>ct;
        int per=ft*1.07;
        if(ct<=per){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}