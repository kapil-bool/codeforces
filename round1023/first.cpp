#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    long long  t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        bool odd=0;
        bool even=1;
        unordered_map<long long ,long long>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            
        }
        int maxi=*max_element(a.begin(),a.end());
        if(mp.size()==1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(a[i]==maxi)cout<<"1"<<" ";
                else
                cout<<"2"<<" ";
                
            }
            cout<<endl;
        }
        
        
    }
}

int main(){
    solver();
}