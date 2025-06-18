#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        //target
        ll  target_abs = abs(a[0]);
        ll smaller=0;
        ll median_idx=n/2;
        //count the no of elemnts
        for(ll i=1;i<n;i++){
            if(target_abs>abs(a[i])) smaller++;
        }
        // ll difference=abs(medianidx-1);
        if (smaller <= median_idx) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }

}

int main(){
    solver();
}