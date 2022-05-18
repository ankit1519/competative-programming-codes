#include <bits/stdc++.h>
using namespace std;
int main(){
    int inpt;
    cin>>inpt;
    int arr[inpt];
    for(int i=0;i<inpt;i++){
        cin>>arr[i];
    }
    sort(arr,arr+inpt);
    int taxi=0;
    for(int i=0;i<inpt;i++){
        if(arr[i]==4){
            taxi++;
        }
        for(int j=0;j<inpt;j++){
            if(arr[i]==1){
                if(arr[j]==3){
                    taxi++;
                    arr[j]=0;
                }
                
            }
        }
    }
}