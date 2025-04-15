#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
  
    vector<int>store(n);
    //brute se niptade
    for(int i=0;i<n;i++){
        cin>> store[i];
        //modify here only
        store[i]=abs(0-store[i]);
       
    }

    cout<<*min_element(store.begin(),store.end());

   

}
int main(){
    solver();
}