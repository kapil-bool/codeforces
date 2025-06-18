#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        long long a ,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
            long long  exictation=abs(a-b);
            //to reach it 
            //mimium no of moves
            //all u have to do is make any one divisible;
            
            long long x = a % exictation;
            long long moves = min(x, exictation - x);
            cout << exictation << " " << moves << endl;
        }
    }
}

int main(){
    solver();
}