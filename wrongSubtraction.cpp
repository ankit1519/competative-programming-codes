#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10==0){
            n/=10;
            n+=1;
        }

       n=n-1;
    }
    cout<<n<<endl;
}