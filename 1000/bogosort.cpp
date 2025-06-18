#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(auto &i:a){
            cin>>i;
        }
        sort(a.rbegin(),a.rend());
        // now why this work is see only two cases are there duplicated and other is consecutive any other is automat beautifull
        // 1 1 1 already fullfling the condition
        //6 5 4 3 this also satisfy
        for(auto i:a){
            cout<<i<<" ";
            
        }
        cout<<endl;
        //multiple answers are there
        
    }
}

int main(){
    solver();
}