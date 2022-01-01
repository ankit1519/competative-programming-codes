#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            cin>>arr[row][col];
        }
    }
    int r,c;
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            if(arr[row][col]==1){
                r=row;
                c=col;
            }
        }
    }
    int val;
    if(r<2 && c<2){
        val=(2-r)+(2-c);
    }
    else if(r<2 && c>2){
        val=(2-r)+(c-2);
    }
   else if(r>2 && c<2){
        val=(r-2)+(2-c);
    }
    else if(r>2 && c>2){
        val=(r-2)+(c-2);
    }
    else if(r==2){
        if(c>2){
            val=c-2;
        }
        else if(c<2){
            val=2-c;
        }
        else{
            val=0;
        }
    }
    else if(c==2){
        if(r>2){
            val=r-2;
        }
        else if(r<2){
            val=2-r;
        }
        else{
            val=0;
        }
    }
    cout<<val<<endl;


}