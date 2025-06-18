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
        vector<int> a(n);
        vector<int> b(n);

         for(int i=0;i<n;i++){//n
            cin>>a[i];
        }
        for(int i=0;i<n;i++){//n
            cin>>b[i];
        }
        ll sum=0;//or initate it with a1
        ll largest_b1=0;
        ll ans=0;
        //unlocking should be done or not this is the question here
        //loop must run k times
        //relation is for sure to be found out between a[i] and b[i];
        for(int i=0;i<min(n,k);i++){
            sum+=a[i];
            //updatye it always and see if a better result can be obtained with the max bi;
            largest_b1=max(largest_b1,(ll)b[i]); //typecasting aslo
            ans=max(ans,sum+ (k-(i+1))*largest_b1);  //0 index so that why  this is exploring all the possiblites

            
        }

        cout<<ans<<endl;

    }
}

int main(){
    solver();
}