#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int r,c,rr,rc;
        cin>>r>>c>>rr>>rc;
        //
        int arr[r][c];
        for(int i=0;i<r;r++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        //
        int count=0;
        for(int i=0;i<r;r++){
            for(int j=0;j<c;j++){
                if(arr[i][j]=='B'){
                    count++;
                }
            }
        }
        int c1=0,c2=0;
        if(count==0){
            cout<<"-1"<<endl;
        }else{
            if(arr[rr][rc]=='B'){
                cout<<"0"<<endl;
            }else{
                for(int i=rr-1;i>=0;i--){
                    c1++;
                    if(arr[i][rc]=='B'){
                        break;
                    }
                }
                for(int j=rc-1;j>=0;j--){
                    c2++;
                    if(arr[rr][j]=='B'){
                        break;
                    }
                }
                int res=min(c1,c2);
                cout<<res<<endl;
            }
        }

    }
}