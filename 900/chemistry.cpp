#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        //sttore the leements;
        for(auto &i:s){
            mp[i]++;
        }
       //odd count ko store kar le remove karne ki jagaha
       int odd_count=0;
    for(auto i:mp ){
        if(i.second%2!=0)odd_count++;
    }
       int remove=odd_count-k;
       //for palindrom at most 1 is allowed
       
       //removal ke baad bhi odd count is more than 1 than return false
        if(remove<=1){
          cout<<"yes"<<endl;
       }
       else cout<<"NO"<<endl;
      
    }

}
int main (){
    solve();
}