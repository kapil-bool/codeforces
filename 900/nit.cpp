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
       int ans=0;
       for(int i=0;i<n;){
        if(a[i]==0){
            i++; //skip this
        }
        else{
            ans++;
            // increment till u see another 0
            while(i<n and a[i]!=0){
                  i++;
            }
        }
       }
       if(ans==0)cout<< 0<<endl;//all zeroes here
        else if(ans==1)cout<< 1<<endl;//all non zeroes 
       //now this case 
       else {
         cout<<2<<endl;
       }
       
    


    }
}

int main(){
    solver();
}