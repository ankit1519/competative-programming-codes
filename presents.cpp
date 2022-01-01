#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        k=arr[i];
        ans[k-1]=i+1;
    }
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}