#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==min){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        count++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
        int temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        count++;
        }
    }
    cout<<count;
}