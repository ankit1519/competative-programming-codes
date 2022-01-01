#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    char ch1;
    for(int i=0;i<n;i++){
        char ch=str[0];
       ch1=toupper(ch);
    }
     string s2=str.substr(1,n-1);
     cout<<ch1+s2<<endl;
}