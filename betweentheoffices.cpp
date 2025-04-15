// #include <bits/stdc++.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int x=0;
int y=0;
string ans="";
void solve(){
   int n;
   string s;
   cin >> n >>s;
   for(int i=0;i<n-1;i++){
    //two cases here 
    if( s[i]=='S' and s[i+1]=='F')x++;
    if( s[i]=='F' and s[i+1]=='S')y++;
   }

   if(x>y){
     ans="YES";
   }
   else{
    ans="NO";
   }

}
int main(){
    //should i store it or directly?
    //oo my approch wont work here as ther is no string input given just the lenght
    solve();
    cout<<ans;
    return 0;
}