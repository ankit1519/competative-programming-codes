#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[10]={4,7,44,77,47,74,444,447,474,477};
    for(int i=0;i<10;i++){
        if(n%arr[i]==0){
            count=1;
            break;
        }
    }
    if(count==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}