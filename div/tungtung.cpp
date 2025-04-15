#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
 
  int t;
  cin>>t;
  while(t--){
     string p;
     cin>>p;
     string  s;
     cin>>s;
   //ya to ek move karega yaa do
   int i=0,j=0;
   while (i < p.size() && j < s.size()) {
    
    if (p[i] == s[j]) {
        // if 2 possible do it  else increment by 1
        if (j + 1 < s.size() && s[j + 1] == s[j]) {
            j += 2;
        } else {
            j ++;
        }
        i++;
    } else {
        break;
    }
}
//check if both reachd end if not return kar de false
 if(i==p.size()and j==s.size() ){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }

     

  }


}
int main(){
    solve();
}