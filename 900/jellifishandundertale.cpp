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
        //implementation
        sort(arr.rbegin(),arr.rend()); //so i picked one next shold be graeter only
        //the moment b==1 //boom
        //so keep b>1
        long long survied=0;
        int index=0; //trave ke liye use hoga
        //the moment b hit 1 boom
         while(b>0){
            //when to chose only when there the time is about to hit
            if(b==1 and index<n){
                b=min(a, b+arr[index]);
                index++;
            }
            
                
            b--;
            
            survied++;

        }
        cout<<survied<<endl;
       

       
    }
}

int main(){
    solver();
}