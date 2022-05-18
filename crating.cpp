#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a,b;
        cin>>a>>b;
        int count=0;
        while(a<b){
            a+=8;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}