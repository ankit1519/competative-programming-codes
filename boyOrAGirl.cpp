#include <bits/stdc++.h>
using namespace std;
int main(){
    string user_name;
    cin>>user_name;
    int n=user_name.length();
    int count=0 , c=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(user_name[i]==user_name[j]){
                c=1;
                break;
            }
        }
        if(c==0){
            count++;
        }
        c=0;
    }

    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}