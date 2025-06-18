#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin>>n>>x;
         vector<long long> a(n);
        for (int i = 0; i < n; i++)
        cin >> a[i];

        //variable hai v-a[i]=x so the va;ue of v is variable must be a range problem
        //max and min pf each elemnt to be found
        ll changes=0;
        ll mini=a[0]-x;
        ll maxi=x+a[0];
        for(int i=1;i<n;i++){
            //comaprison start
            ll currentmini=a[i]-x;
            ll currentmaxi=a[i]+x;

            mini=max(mini,currentmini);
            maxi=min(maxi,currentmaxi);
            //differnt way 
            if(mini>maxi){
                changes++;
                mini=currentmini;
                maxi=currentmaxi;

            }

        }
        cout<<changes<<endl;


    }
}

int main(){
    solver();
}