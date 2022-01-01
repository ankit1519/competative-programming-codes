#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count=0;
    while(x>=5){
        x-=5;
        count++;
    }
    if(x>0){
        count++;
    }

    
    cout<<count<<endl;
}