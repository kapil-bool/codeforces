#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin>>x>>k;
        //to minimze all i have to do is if target is %2by k the previous of it and add 1 to the answer
        if(x%k==0){
            //jump -1 from x
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;


        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }

    }
}

int main(){
    solver();
}