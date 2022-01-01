#include <bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    while(true){
        y+=1;
        int res=y;
        int y1=y%10;
        y=y/10;
        int y2=y%10;
        y=y/10;
        int y3=y%10;
        y=y/10;
        int y4=y%10;
        if(y1!=y2&&y1!=y3&&y1!=y4&& y2!=y3&&y2!=y4 && y3!=y4){
            cout<<res;
            break;
        }
        y=res;
    }
}