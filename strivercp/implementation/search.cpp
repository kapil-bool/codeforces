#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t;
    cin>>t;
    int count1=0;
    vector<ll>store(t);
    for(int i=0;i<t;i++){
        cin>>store[i];
        if(store[i]==1){
            count1++;
        }
    }

    if(count1!=0)cout<<"HARD"<<endl;
    else{
        cout<<"EASY"<<endl;
    }
}

int main(){
    solver();
}