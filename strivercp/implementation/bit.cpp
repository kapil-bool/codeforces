#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    int ans=0;
    string s;
    while(t--){
         cin>>s;
         if(s.find("++")!=string::npos){
             ans++;
         }
         else{
               ans--;
         }
    }
    cout<<ans<<endl;
}

int main(){
    solver();
}