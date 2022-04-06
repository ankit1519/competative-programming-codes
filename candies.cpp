 #include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int arr[3];
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        int m=INT_MIN;
        for(int i=0;i<3;i++){
            m=max(m,arr[i]);
        }
        int num=0;
        for(int i=0;i<3;i++){
           if(arr[i]!=m){
                num+=arr[i];
            }
        }
        if(num==m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}