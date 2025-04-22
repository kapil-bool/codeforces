#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
     int t;
     cin>>t;
     vector<int>store(t);
     while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        c=c%2;
        if(c+a>b)cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;

     }
}
int main(){
    solver();
}