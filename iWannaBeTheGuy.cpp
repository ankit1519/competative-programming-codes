#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,l;
    cin>>n;
    cin>>p;
    int arr[n+1]={0};
    for(int i=0;i<p;i++){
        cin>>l;
        arr[l]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>l;
        arr[l]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}