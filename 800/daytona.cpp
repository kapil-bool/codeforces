#include<bits/stdc++.h>
using namespace std;
void solve(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      bool present=0;
      vector<int>store(n);
      for(int i=0;i<n;i++){
        cin>>store[i];
        if(store[i]==k)present=1;
      }

      //now the logic part begin;
      //subsequence me k should be max so will be using a map;
      if (present)
      cout << "YES" << endl;
  else
      cout << "NO" << endl;
   }
}
int main(){
    solve();
}