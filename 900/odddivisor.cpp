#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        if(n &(n-1)!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    solver();
}