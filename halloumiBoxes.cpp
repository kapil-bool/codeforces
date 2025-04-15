#include<bits/stdc++.h>
using namespace std;
void solve(){
   int t,n,k;
   cin>>t;
   while(t){
       cin>>n>>k;
    vector<int>store(n);
     for(int i=0;i<n;i++){
        cin>>store[i];
     }
     //sorted and not sorted ar
     if(is_sorted(store.begin(),store.end()) || k>1){
          cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
     t--;
   }
   
}
int main(){
    solve();
    
}