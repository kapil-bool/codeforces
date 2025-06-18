#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a;
        //implemntation part now
        //pehle badde part ko put kar de then the smllest part delayinng the x
        for(int i=0;i<n;i++){
            if(i!=x){
                a.push_back(i);
            }
        }
        a.push_back(x);


   
        for(int i=0; i<n; i++){
            cout<<a[i]<< " ";
        }
        cout << endl;

    }
}

int main(){
    solver();
}