#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);
        for(auto  & i: a){
            cin>>i;
        }
        //so it lies in a range 
        ll low=1,high=1e9;
        ll ans=-1;
        while(low<=high){
        ll mid=(low+high)>>1;
        ll total=0;
        for(int i=0;i<n;i++){
            total+=(a[i] + 2 * mid) * (a[i] + 2 * mid);  
           if(total>c)break;
        }

        if(total<c){
            //this means smaller selection is done
            low=mid+1;
           
        }
        else{
            high=mid-1;
        }
        if(total==c){
            ans=mid;
        }


        // ans=mid;
        }
        cout<<ans<<endl;
    }
}

int main(){
    solver();
}