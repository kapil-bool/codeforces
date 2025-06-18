#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        //just checkmif its a perfect integer or not
        // stoi use kar sakte hai
        int number=stoi(s);
        //bascic formula 
        int root=pow(number,0.5);
        if(root*root==number){
            cout<<root<<" "<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}

int main(){
    solver();
}