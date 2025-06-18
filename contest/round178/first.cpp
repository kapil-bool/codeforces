//take long long here
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    long long t;
    cin >> t;
    while(t--){
        long long a, b,c;
        cin>>a>>b>>c;
        //implementation
        //making eual meanss average 
        long long sum=(a+b+c);
        if(sum%3!=0){
            cout<<"NO"<<endl;
            //possible he nahi hai 
            //float value here wont make it happen
        }
        else{
            long long check=sum/3;
            //no of cards each need will be obtained;
            if(check>=a and check>=b and check<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }

    }
}

int main(){
    solver();
}   