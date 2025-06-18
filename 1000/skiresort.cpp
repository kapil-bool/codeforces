#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>q)a[i]=0;
            else
            a[i]=1;
        }
        //now will do the sliding window if the window is greter than or eual to k then only valid i find the longest subsequence first
        ll right=0;
        ll left=0;
        ll sum=0;
        while(right<n){
            //expension  
            if(a[right]==1)right++;
            else{
                ///check for valid window;
                ll sizee=right-left;
                if(sizee>=k){
                    ll cal=sizee-k+1;
                    sum+=cal*(cal+1)/2;
                }
                right++;
                left=right;
            }
        }

        // there will be one more valid segment possible
        ll sizee= right-left;
        if(sizee>=k){
               ll cal=sizee-k+1;
               sum+=cal*(cal+1)/2;
        }
        cout<<sum<<endl;
    }
}

int main(){
    solver();
}