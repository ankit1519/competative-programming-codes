#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n,m;
    cin>>n>>m;
    long int arr[100000];
    for(int i=0;i<100000;i++){
        cin>>arr[i];
    }
    long long int res=arr[0]-1;
    for(int i=1;i<m;i++){
        if(arr[i]>=arr[i-1]){
            long int diff=arr[i]-arr[i-1];
            res+=diff;
        }else{
            long int rs=n-arr[i-1]+arr[i];
            res+=rs;
        }
    }
    cout<<res;
    
    
    return 0;
}
