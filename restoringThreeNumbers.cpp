#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3,x4,n1,n2,n3;
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    n1=arr[3]-arr[0];
    n2=arr[3]-arr[1];
    n3=arr[3]-arr[2];
    cout<<n1<<" "<<n2<<" "<<n3;
    
}