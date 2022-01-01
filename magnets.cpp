#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prev=arr[0];
    int count=1; //1 change = 2 group
    for(int i=1;i<n;i++){
        int curr=arr[i];
        if(prev!=curr){
            count++;
        }
        
        prev=arr[i];
    }
    cout<<count;
}