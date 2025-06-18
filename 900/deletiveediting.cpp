#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin>>s>>t;
     //cases banenge
     //map to use hoga he
     int n=s.size();
     int m=t.size();
     if(n<m){
        cout<<"No"<<endl;
     }
     //use vector insted 
     vector<int> store(26, 0);
     for (int i = 0; i < m; i++)
         store[t[i] - 'A']++;
    
         
        
    }
}

int main(){
    solver();
}