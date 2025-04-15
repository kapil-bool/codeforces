#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3!=0)cout<<"First"<<endl;//vanya 
        if(n%3==0)cout<<"Second"<<endl;//vova
    }
}
int main(){
    solver();
}