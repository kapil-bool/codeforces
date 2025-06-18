#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long  ll;

void solver(){
    int t;
    cin >> t;
    // ll ans=0; //for minimum possible x
    while(t--){
        ll n,ans=0;
        cin>>n;
        vector<ll>a(n);
        for(auto &i: a){
            cin>>i;
        }
        for(int i=0;i<n/2;i++){
            ll differ=abs(a[i]-a[n-1-i]);
            //now this fiffer will hold true for the ith elem other elem also store it
            ans=(__gcd(differ,ans)); //max is usless here
        }
        
        cout<<ans<<endl;

    }
}

int main(){
    solver();
    //8
    //3 0 1 2 0 3 2 1  so mod must give the same result here 
    /* odd or even it does not matter so here the minimum can be 0 and max will max(a)-1 but brute wont work 
    so the differnce part is clear will be modulo of each now use the gcd of this*/
}