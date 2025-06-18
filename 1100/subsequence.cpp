#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t=1;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(auto &i : a){
            cin>>i;
        }
        //1 hoga so i must be a part of this any if i can make a[i] from the other array its  a yes else no
        sort(a.begin(),a.end());
        if(a[0]!=1){
            cout<<"NO"<<endl;
            return;
        }
        ll sum=1;
        //now the sub sequence part;
        //can it be like pick not pick of dp; but will it not be a waste for this
        //if sum<a[i] no way it can be formed actually it should be dp 
        for(int i=1;i<n;i++){
            if(a[i]>sum){
            cout<<"NO"<<endl;
            return;         
            }
            sum+=a[i];
        }
       cout<<"Yes"<<endl;
    }
}

int main(){
    solver();
}



