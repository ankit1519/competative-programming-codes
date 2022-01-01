#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cu=0;
    int cl=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='A' && ch<='Z'){
            cu++;
        }
        else if(ch>='a' && ch<='z'){
            cl++;
        }
    }
    if(cu>cl){
         for(int i=0;i<s.length();i++){
             char ch1=toupper(s[i]);
             cout<<ch1;
         }
    }
    else{
        for(int i=0;i<s.length();i++){
             char ch1=tolower(s[i]);
             cout<<ch1;
         }
    }
}