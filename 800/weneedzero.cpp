#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //implementation part;
        int a_size=a.size();
        int xor_s=0;
        for(int i=0;i<n;i++){
           xor_s^=a[i];
        }
        if (xor_s == 0) {
            cout << 0 << endl;
        } else if (a_size % 2 == 0) {
            cout << -1 << endl;
        } else {
            cout << xor_s << endl;
        }
        

    }
}

int main(){
    solver();
}