#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int count;
    for(int i=0,j=t.length()-1;i<s.length() ,j>=0;i++,j--){
        if(s[i]==t[j]){
            count=1;
        }
        else{
            count=0;
            break;
        }
    }
    if(count==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
