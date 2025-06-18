#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long  ll;

void solver(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m,p,q;
        cin>>n>>m>>p>>q;

        //relation lies bw m and q for sure 
        //i think always m is possible even if its 0 yes//
        //no of such sub division possible
        ll div=n/p;
        ll r=n%p; //if there is proper divisio n thatis
        if(r==0){
              if(m==div*q)cout<<"YES"<<endl;
              else
              cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }



    }
}

int main(){
    solver();
}