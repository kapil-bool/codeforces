#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
//count the number of complete one 
void solver(){
    long long t;
    cin >> t;
    while (t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll operation=0;
        ll count=0;
        
        //check for every (  must exist a )so will ignore this  but ) will be the problem maker
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                count--;
            }
            else{

                count++;
            }
            //if count become negative ++oper
            if(count<0){
                operation++;
                //reset the count also else wont make a change  ())()()(
                count=0;
            }
        }
        cout<<operation<<endl;

    }
}

int main(){
    solver();
}