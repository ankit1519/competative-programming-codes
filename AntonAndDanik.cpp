#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ca=0,cd=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            ca++;
        }
        else if(s[i]=='D'){
            cd++;
        }
    }
    if(ca>cd){
        cout<<"Anton";
    }else if(cd>ca){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}