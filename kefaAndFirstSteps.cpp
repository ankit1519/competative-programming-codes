#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   if(n==1){
       cout<<1<<endl;
       return 0;
   }
   int ct=1;
   int m=INT_MIN;
   for(int i=0;i<n-1;i++){
       if(arr[i]<=arr[i+1]){
           ct++;
       }else{
           ct=1;
       }
       m=max(m,ct);
   }
   cout<<m<<endl;
}