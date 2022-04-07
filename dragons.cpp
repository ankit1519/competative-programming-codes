#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    bool b=true;
    cin>>s>>n;
    pair<int ,int> p[1000];
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(s<=p[i].first){
            b=false;
            break;
        }
        s+=p[i].second;
    }
    if(b){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

    return 0;
}