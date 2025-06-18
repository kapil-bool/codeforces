#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
//why binary is a intresting one;

bool validator(ll mid,vector<ll> & heights, ll x){
    ll total_water=0;
    //now subtact from each height[i];
    for(int i=0;i<heights.size();i++){
        if(heights[i]<mid){
           total_water+=(mid-heights[i]);
        }
    }
    return total_water<=x; //condition one
}
void solver(){
    int t;
    cin >> t;
    while(t--){
         ll n,x;
        cin>>n>>x;
        vector<ll>heights(n);
        for(int i=0;i<n;i++){//n
            cin>>heights[i];
        }

        ll min=1, max=1e12;
        ll ans=-1;
        //actually its like max of heights and a random value x so taking a large number so it dont make a diifer
        while(min<=max){

            ll mid=(min+max)>>1;
            //now validate 
            if(validator(mid,heights,x)){
                //this means the mid is ok till now;
                min=mid+1;
                ans=mid;
            }
            else{
                //a larger value has occured therfore reduce the end;
                max=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}

int main(){
    solver();
}