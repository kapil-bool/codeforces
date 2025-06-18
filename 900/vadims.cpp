#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
         string s;
         cin>>s;
        //vector more easy to implement here
         vector<int>store(10,0);
         for(auto i:s){
            store[i-'0']++;
         }
         string ans=""; //this will be returned
         for(int i=0;i<10;i++){
            //condition ye hai ki ans[i]<=10-i-1
            int neede=10-i-1; //this will be the minimum so most optimal to yahi hai but if not there then the next one
             for(int  j=neede;j<10;j++){
                 if(store[j]>0){
                    //mil gaya
                    ans+= (j+'0');
                    //now reduce it from the vector
                    store[j]--;
                    break;

                 }
             }
         }
         cout<<ans<<endl;
    }
}

int main(){
    solver();
}