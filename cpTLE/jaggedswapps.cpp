#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
    int t;
    cin>>t;
    //permuted array hai so need for map here
    //in question 1 based indexing is mentioned
    while(t--){
        int n;
        // (3≤n≤10)
        cin>>n;
        
        vector<int>store(n);
        for(int i=0;i<n;i++){
            cin>>store[i];
        }
        // only swappes allowd to i+1 and i peak element ka concept ayega
      if(store[0]==1) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
}
int main (){
 solver();
}