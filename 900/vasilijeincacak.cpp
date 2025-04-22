#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        long long  n,k,x;
        cin>>n>>k>>x;
        long long min_range=k*(k+1)/2;
        long long max_range=k*(2*n-k+1)/2;  ///isko dekh lena ek bar dubara
        
        if(x<=max_range and x>=min_range){
            cout<<"YES"<<endl;

        }
        else
        cout<<"NO"<<endl;
    }
}

int main(){
    solver();
}