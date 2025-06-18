#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int n;
    cin>>n;
    string t;
    cin >> t;
    bool flag=0;
    for(int i=0;i<n-1;i++){
        if(t[i]>t[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
}

int main(){
    solver();
}