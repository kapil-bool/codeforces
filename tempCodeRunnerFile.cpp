// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   unordered_map<int,char>mp;
    mp[1]='A';
    mp[3]='B';
    mp[2]='C';
    mp[0]='D';
   
//    char category= mp[n%4];
   //now obtain the hight possible
//    if(category=='A'){
//     cout<<1<<" "<<'A'<<endl;
//    }
   //now at most 2 is asked
   //therfore loop till2
   //category comparison better rahenge
//    store till the end
 char store=mp[n%4];
 int numeric=n;
 int i_s=0;
   for(int i=1;i<3;i++){
      int ope=n+i;
      char alpa=mp[ope%4];
      if(alpa<store){
         store=alpa;
         numeric=ope;
         i_s=i;
      }
   }
   cout<<i_s<<" "<<store<<endl;
}
int main(){
    //should i store it or directly?
    
    solve();
}