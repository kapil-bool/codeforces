#include<bits/stdc++.h>
using namespace std;
#include<iostream>
void solve(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int>store(n,0);
         for(int i=0;i<n-1;i++){
            cin>>store[i];
         }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=store[i];
        }

        int ans=-sum;
        cout<<ans<<endl;
      
   }
}
int main (){
    solve();
}
