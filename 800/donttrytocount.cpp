#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
   int t;
   cin>>t;
   while(t--){
     int n,m;
     cin>>n>>m;
     string x,s;
     cin>>x;
     cin>>s;
     //if found return the count 
     //else return -1
     
     int count=0;
    //finding wala algo likha
   //check if current part is present if not dupplicate it also check the size
    string current=x;
    while(current.find(s)==string::npos and current.size()<=100){
         count++;
         current+=current;
    }
    //above loop will stop if u find it or u dont;
    if(current.find(s)!= string::npos){
         cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }

 }
} 
int main (){
    solve();
}

