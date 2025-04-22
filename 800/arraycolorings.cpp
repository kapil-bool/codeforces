#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>store(n);
       for(int i=0;i<n;i++){
          cin>>store[i];
       }
       //lets begin
       //pariety should be same of both sum if u colour;
       //differnt colour but how;

       //even+even=even and so for oddd wala concept may work here
       int even_count=0;
       int odd_count=0;
       for(int i=0;i<n;i++){
          if(store[i]%2!=0)odd_count++;
          else 
          even_count++;

       }
       //now the parity part;
       //if all are odd or even return true. only way odd pariety exist is 
      ///odd wale should be %2=0
      if(odd_count%2==0)cout<<"yes"<<endl;
      else
       cout<<"no"<<endl;
   }
}
int main(){
  solver();
}