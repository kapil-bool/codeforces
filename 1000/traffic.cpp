#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    ll t;
    cin >> t;
    while(t--){
         long long n;
        cin >> n;
        char color;
        cin >> color;
        string s;
        cin >> s; 
        s += s;
        n *= 2;
        //basically agar double ka pata chal gaya to baki repeted ke liye bhi same hi hoga
        //intution to yehi hai difference bw red and green light and the difference is max u return it;
        ll lastg=-1;
        ll difference=LLONG_MIN;
        for(ll i=n-1;i>=0;i--){
            if(s[i]=='g')lastg=i;
            if(s[i]==color){
                //calculate the differ
                ll currentd=(lastg-i);
                difference=max(difference,currentd);
            }
        }
        cout<<difference<<endl;
    }
}

int main(){
    solver();
}