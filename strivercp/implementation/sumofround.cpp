#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        int place=1;
        while(n>0){
            int digits=n%10;
            if(digits!=0){
                a.push_back(digits*place);
            }
            n=n/10;
            place*=10;
        }
        cout<<a.size()<<endl;
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    solver();
}