#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        //input the 2 arrays and continue
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        vector<int> x(q);
        for (auto &v : x) cin >> v;
        // vector<ll>used(n,0);

        //now for every x check
        //agar lineraly karne gaya to bohhat time lag sakta hai so 
            //IF NOT DIVISBLE BY 2 THEN ANY POWER WILL BE USLESS TO CHEK  THEREFORE SAVING THE TIME FOR OTHER ONE
        //only the samlller one will do the work
        ll checkpoint=31;
        for(ll i=0;i<q;i++){
            if(x[i]>=checkpoint)continue;
           ll checker=pow(2,x[i]);
           ll adder=checker >>1;
           for(ll j=0;j<n;j++){
            //modify when not used and divisible
            if(a[j]%checker==0){
                a[j]+=adder;
            }
           }
           checkpoint=x[i]; //in the seconda rray
        }
        for(auto i:a){
            cout<< i <<" ";
        }
        cout<<endl;

    }
}

int main(){
    solver();
}