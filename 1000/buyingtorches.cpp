#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        // ll min_trade=0;
        // ll exhange1_gain=x-1;
        // ll exchnage2_gain=k;//baciclly no of stick to gain one coal
        /*
        1.so if for 1 coal=y sticks
        then for n torces
        n*y sticks as 1 coal is minimum requirment for 1 torch
        and for n torches n sticks are required
        */
    //    ll min_sticks=k*y+k; //first is for coal another one is for sticks;
       
        ll sticks_needed = k * y + k; // sticks for coal + torches
        ll stickEchanges_made = ((sticks_needed - 1) + (x - 1)-1) / (x - 1); // ceil division
        ll min_trade = stickEchanges_made + k; // stick trades + coal trades

       cout<<min_trade<<endl;


    }
}

int main(){
    solver();
}