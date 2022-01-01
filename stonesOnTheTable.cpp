#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    char prev=str[0];
    int count=0;
    for(int i=1;i<n;i++){
        char curr=str[i];
        if(curr==prev){
            count++;
        }
        prev=curr;
    }
    cout<<count<<endl;
}