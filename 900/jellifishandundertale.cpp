#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans=b;
        //implementation
        //so what i can do here is pick the rtool kit only when thre timer is 1  means no more but will boom at 0 only  so onclude it in its completness
        for(int i=0;i<n;i++){
           ans+=min(a-1,arr[i]);
        }
        
       cout<<ans<<endl;

       
    }
}

int main(){
    solver();
}