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
        //parity do the bit wise 
        ll ans = a[0];
        int j=0;
        ll sum=a[0];
        for(int i=1;i<n;i++){
            //a[i]& 1==a[i+1]&1 same parity ho gayi will be using this logic so
            //if sum is negative then make it zero as it will reduce the maximum sum only but what about all negative array
            //individual bhi to consider hoga he
            //
            if(sum<0){
                sum=0;
                j=i;
                //same possition pe le aa now check for parity
            }
            if(i>j){

                if((a[i]& 1)!=(a[i-1]&1)){
                    //then just add the a[i]'\;
                    sum+=a[i];
                }
                else{
                    sum=a[i];
                    j=i;
                }
            }
            else{
                //first elemt add karne ke liye hai ye to new array kaq
                sum=a[i];

            }
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
}

int main(){
    solver();
}