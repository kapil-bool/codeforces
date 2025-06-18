#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        long long zer=0;
        long long one=0;
        for(auto i : s){
            if(i=='0')zer++;
            else
            one++;
        }
        
        int moves=min(zer,one);
        
        if(moves%2==1)cout<<"DA"<<endl;
        else
        cout<<"NET"<<endl;
        

    }
}

int main(){
    solver();
}