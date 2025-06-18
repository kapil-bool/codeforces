#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        cout << ((odd && (even || odd % 2)) ? "YES\n" : "NO\n");
    }
}

int main(){
    solver();
}