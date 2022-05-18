#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num--){
       int sold;
       cin>>sold;
       int earning=sold*50;
       int buys=0.20*earning;
       int buys2=0.20*earning;
       int rent=0.30*earning;
       int profit=earning-buys-buys2-rent;
       cout<<profit<<endl;
    }
}