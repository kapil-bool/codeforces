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
        //0 in not alloted for that what 
        for(int i=0;i<n;i++){
             ll value;
             cin>>value;
             a[i]=value+i+1;
        }
        sort(a.begin(),a.end());
        ll telported_count=0;
        for(int i=0;i<n;i++){
            if(a[i]<=k){
                telported_count++;
                k-=a[i];
            }
        }
        cout<<telported_count<<endl;
    }
}

int main(){
    solver();
    /* if the remaing cost is greater than or equal to the the a[i] telportation count++
     so how the simulation will be represented is actully the base idea herer
     //telporting and starting again may  not be actully  be tle so store it somewhere already like the prefix */
}