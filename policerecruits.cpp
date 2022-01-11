#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0,c=0,num;
    cin>>n;
    while(n--){
        cin>>num;
        if(num>0){
            p+=num;
        }
        else{
            if(p<1){
                c++;
            }
            else{
                p--;
            }
        }
    }
    cout<<c;
}