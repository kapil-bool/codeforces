#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mini = 0; // always 0
        // int maxi = -1e6;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += abs(n - 2 * i + 1); 
        }

        cout << (sum / 2) + 1 << endl; // corrected formula
    }
}

int main(){
    solver();
}
