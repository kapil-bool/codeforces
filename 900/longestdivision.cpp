#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
       vector<int>divisor;
       for(int i=1;i*i<=n;i++){
         if(n%i==0)
         divisor.push_back(i);
         
       }

       //now just apply the sliding window thing here
       int maxlen=1;
       int count=1;//always;
       for(int i=1;i<divisor.size();i++){
           if(divisor[i]==divisor[i-1]+1){
            count++;
           }
           else{
            maxlen=max(count,maxlen);
            count=1;
        }
        maxlen=max(count,maxlen);
       }
       cout<<maxlen<<endl;
    }
}

int main(){
    
    //sabka 1 to hota he hai
    solver();
}