#include <bits/stdc++.h>
using namespace std;
int main(){
    //area of each square =1 unit
    //area of domino...>>>=2 unit --->>as it is 2*1 square
    //so for m*n board --->>> 2unit*num=m*n
    //so for m*n board total domino will be (m*n)/2



    int m,n;
    cin>>m>>n;
    int num=(m*n)/2;
    cout<<num<<endl;
}