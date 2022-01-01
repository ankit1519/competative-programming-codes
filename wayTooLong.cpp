#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;
        if(str.length()<=10){
            cout<<str<<endl;
        }
        else{
            int diff=str.length()-2;
            string s=to_string(diff);
            cout<<str[0]+s+str[str.length()-1]<<endl;
        }
    }
}