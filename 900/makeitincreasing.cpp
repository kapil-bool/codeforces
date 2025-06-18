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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //implemetation
        //back se implemnation kar easy karega kyu wo fix hai
        int ans=0;
        bool possible=true;
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1]){
                if(a[i]==0){
                    //nipta do possible nahi hai;
                    possible=0;
                    break;
                }
                else{
                    a[i]=a[i]/2;
                    ans++;
                }
                if(!possible)break;
            }
        }
        if(possible)cout<<ans<<endl;
        else{
            cout<<-1<<endl;
        }
    }
}

int main(){
    solver();
}