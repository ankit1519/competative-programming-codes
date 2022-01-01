#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //bubble_sort
    for(int i=1;i<s.length();i++){
        for(int j=0;j<s.length()-i;j++){
            if(s[j]!='+'){
                if(s[j]>s[j+2]){
                    int temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }
        }
    }
    cout<<s;
}