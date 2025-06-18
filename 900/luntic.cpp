#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        long long ones=0;
        long long zeroes=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)ones++;
            if(a[i]==0)zeroes++;
        }
        //no of ones reduce for sure 
        //but combination along 0 and the other achivable no can be also there
        //so muliple posssiblity
        long long ans=ones*(pow(2,zeroes));
        cout<<ans<<endl;
    }
}

int main(){
    solver();
}