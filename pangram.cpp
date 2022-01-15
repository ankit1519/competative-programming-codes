#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
    }
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[str[i]-'a']+=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}