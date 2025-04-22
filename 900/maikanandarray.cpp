#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        // Case 1: max of adjacent a[i] - a[i+1]
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[i] - a[i + 1]);
        }

        // Case 2: bring max element to end (simulate a[n-1] = max(a[0..n-2]))
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }

        // Case 3: bring min element to start (simulate a[0] = min(a[1..n-1]))
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[n - 1] - a[i]);
        }

        cout << ans << "\n";
    }
}

int main(){
    solver();
}