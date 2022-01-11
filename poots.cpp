#include <bits/stdc++.h>
using namespace std;
int main(){
    long tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long max=INT_MIN;
        long min=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        cout<<max-min<<"\n";
    }
}