#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    string x;
    cin>>x;
    int n=x.size();
    for(int i=0;i<n;i++){
        int digit=x[i]-'0';
        if(digit>=5){
          //change it
          int invert=9-digit;
          //no traling 0 rember
          if(i==0 and invert==0){
        // do nothing
          continue;
          }
          x[i]=invert+'0';

        }
        

    }
    cout<<x<<endl;

}

int main(){
    solver();
}