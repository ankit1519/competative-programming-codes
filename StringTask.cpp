#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string str1;
    cin>>str;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        ch=(char)tolower(ch);
        if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&&ch!='u'&& ch!='y'){
            str1+='.';
            str1+=ch;
        }
    }
    cout<<str1;
}