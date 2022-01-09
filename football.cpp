#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    int prev=str[0];
    for(int i=1;i<str.length();i++){
        char ch=str[i];
        if(ch==prev){
            count++;
            if(count==6){
            cout<<"YES"<<"\n";
            return 0;
           }
        }else{
            count=0;
        }
        prev=ch;
    }
    cout<<"NO";
    return 0;
}