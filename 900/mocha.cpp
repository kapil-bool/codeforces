#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        cin>>a[0];
        int ans=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            ans=ans&a[i];
            
        }

        cout<<ans<<endl;

        //now take and if alll tghe element and return the smallest value 
        
    }
}

int main(){
    solver();
}