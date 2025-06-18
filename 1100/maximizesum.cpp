#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;


void solver(){
    int t;
    cin >> t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       vector<ll>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a.begin(),a.end());
       vector<ll>pre(n);
       pre[0]=a[0];
       for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
       }

       //now just decide what u want to minus the biggest or the samllest;
       ll ans=0;
       for(int i=0;i<k;i++){
         //samllest and the largest
       }
    }
}

int main(){
    solver();
}