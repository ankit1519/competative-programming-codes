#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=0;j<m;j++){
                cout<<'#';
            }
        }
        else{
            if(i%4!=0){
                //cout<<(m-1)*'.'<<'#';
                for(int j=0;j<m-1;j++){
                cout<<'.';
            }
            cout<<'#';
            }else{
               // cout<<'#'<<(m-1)*'.';
               cout<<'#';
                for(int j=0;j<m-1;j++){
                cout<<'.';
            }
            }
        }
        cout<<endl;
    }
}