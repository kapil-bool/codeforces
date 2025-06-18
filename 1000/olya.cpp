#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long  ll;
#include<algorithm>

void solver(){
    ll t;
    cin >> t;
    while(t--){
      
        //already settled with the logic of this question store all the min2 at a place add them and minus the samleest from sum and all=so add the min of min1;
        ll mini1=LLONG_MAX;
        vector<ll>min2;
        ll n;
        cin>>n;
        while(n--){
            ll m;
            cin>>m;
            vector<ll>a(m);
            for (auto &x : a) // m
                cin >> x;

           sort(a.begin(),a.end());
           mini1=min(mini1,a[0]);
           min2.push_back(a[1]);
           //function doinng all the work till here
        }
        //all iu need is summsion here;
        //use the accumalate 
        ll sum_=accumulate(min2.begin(),min2.end(),0ll);
        ll smallestofsecond=*min_element(min2.begin(),min2.end());
        cout<<mini1+sum_-smallestofsecond<<endl;
        
    }
}

int main(){
    solver();
}