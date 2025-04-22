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
    //logic start
     int count=0;
     int max_len=0;
     for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
       }
      else{
       max_len=max(max_len,count);
       count=0;

       }
     }
     cout<<max(max_len,count)<<endl;
}
}

int main(){
    solver();
}