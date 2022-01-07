#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    set<char> s;
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            s.insert(str[i]);
        }
    }
    cout<<s.size();
}