#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str[0]>='a'&&str[0]<='z'){
        if(str.length()==1){
            str[0]=toupper(str[0]);
            cout<<str[0];
            return 0;
        }

        for(int i=1;i<str.length();i++){
            if(str[i]>='a'&&str[i<='z']){
                
                cout<<str<<endl;
                return 0;
            }
        }
        for(int i=1;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        str[0]=toupper(str[0]);
        cout<<str;
        return 0;
    }else{
         if(str.length()==1){
             str[0]=tolower(str[0]);
            cout<<str;
            return 0;
        }
        for(int i=1;i<str.length();i++){
            if(str[i]>='a'&&str[i<='z']){
                cout<<str<<endl;
                return 0;
            }
        }
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        cout<<str;
    }
    return 0;
}