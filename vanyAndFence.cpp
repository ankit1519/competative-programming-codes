#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h,height;
    cin>>n>>h;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>height;
        if(height<=h){
            sum+=1;
        }
        else{
            sum+=2;
        }
    }
    cout<<sum;
}