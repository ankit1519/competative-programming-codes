#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int arr[s1.length()];
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    for(int i=0;i<s1.length();i++){
        cout<<arr[i];
    }

}