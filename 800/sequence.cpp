#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     vector<int>paper1(n);
     for(int i=0;i<n;i++){
        cin>>paper1[i];
     }
     vector<int>paper2;
     paper2.push_back(paper1[0]);
     for(int i=1;i<n;i++){
        //main logic is finding the elements here from paper1 
        //but how will inretrive them
        //till now only the starting elemt is present;
        if(paper1[i]>=paper2.back()){
            //push it
            paper2.push_back(paper1[i]);
        }
        else{
            // If it's smaller, insert an extra element to simulate a drop in sequence
            
            paper2.push_back(paper1[i] > 1 ? paper1[i] - 1 : 1); //perfect tilll here
            paper2.push_back(paper1[i]);
        }
    }
    //   now the implementation part
    cout<<paper2.size()<<endl;
    for(auto &i : paper2){
        cout<<i<<" ";
    }
    cout<<endl;
   }

}
int main(){
    solver();
}