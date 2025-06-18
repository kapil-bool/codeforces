#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t;
    cin >> t;
    while(t--){
       ll n,k;
       cin>>n>>k;
        string s;
        cin >> s;

        // Count number of 0s and 1s 
        ll count_0 = 0, count_1 = 0;
        for(char c : s){
            if(c == '0') count_0++;
            else count_1++;
        }
       //core logic;
       //good pair
       count_1=count_1/2;
       count_0=count_0/2;  //pair bane gaye

       if(count_1+count_0==k) cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
}

int main(){
    solver();
}