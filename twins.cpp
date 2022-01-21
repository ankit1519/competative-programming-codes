#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vr(n);
    for(int i=0;i<n;i++){
        cin>>vr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=vr[i];
    }
    int sn=0;
    int count=0;
    sort(vr.begin(),vr.end(),greater<int>());
    for(int i=0;i<n;i++){
        sn+=vr[i];
        count++;
        if(sn>sum/2){
            cout<<count<<endl;
            return 0;
        }
    }
}