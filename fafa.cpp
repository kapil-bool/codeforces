// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   int count=0;
   for(int i=1;i<n;i++){
     if(n%i==0)count++;
   }
   cout<<count;

}
int main(){
    //should i store it or directly?
    
    solve();
}