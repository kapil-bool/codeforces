// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n,m;  //no op operation hai
   //n=lenght of ss
   //m=no of operation to perform
   string s;
   cin>>n>>m>>s;
   int l,r;
   char c1,c2;
   while(m){
    cin>>l>>r>>c1>>c2; //these need to be taken in the loop
    for(int i=l-1;i<r;i++){
        if(s[i]==c1){
            s[i]=c2;
        }
    }
    m--;
   }

   cout<<s;
   
}
int main(){
    //should i store it or directly?
    
    solve();
    
}