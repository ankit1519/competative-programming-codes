#include <bits/stdc++.h>
using namespace std;
int main(){
   int test_case;
   cin>>test_case;
   while(test_case--){
       int x;
       cin>>x;
      string str;
      cin>>str;
      int cn=0,cc=0;
      for(int i=0;i<str.length();i++){
          int ch=str[i];
          if(ch=='C'){
              cc++;
          }else if(ch=='N'){
              cn++;
          }
        }

        if(cc>cn){
            cout<<60*x<<endl;
        }else if(cc<cn){
            cout<<40*x<<endl;
        }else{
            cout<<55*x<<endl;
        }
    }

    
}