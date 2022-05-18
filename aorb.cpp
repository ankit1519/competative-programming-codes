#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    int c1=0,c2=0;
    while(tc--){
        int t;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            if(s=="START38"){
                c1++;
            }else{
                c2++;
            }
        }
        cout<<c1<<" "<<c2;
        c1=0,c2=0;
    }
    return 0;
}