// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    unordered_map<char,int>mp;//store the element count  as specially  z and n  will be used to decode the string;
    for(auto & i:s){
        mp[i]++;
    }
    //count z and n;
    //one to be first and then the 0
    int z_count=mp['z'];
    int n_count=mp['n'];
    for(int i=0;i<n_count;i++) {cout<<1<<" ";}
    for(int i=0;i<z_count;i++) {cout<<0<<" ";}
}
int main(){
    //should i store it or directly?
    
    solve();
}