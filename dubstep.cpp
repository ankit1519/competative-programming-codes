#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool cn=true;
    for(int i=0;i<str.length();i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            if(cn==false){
                cout<<" ";
            }
        }
        else{
            cn=false;
            cout<<str[i];
        }
    }
    return 0;
}