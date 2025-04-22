#include <iostream>

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n = 0;
    cin >> n;
    vector<int> inp(n);
    for (auto& x : inp) cin >> x;

    // Sort the array
    sort(inp.begin(), inp.end());

    // If all elements are the same, can't split
    if (inp.back() == inp[0]) {
        cout << "-1\n";
        return;
    }

    // Find the position where the value changes
    int it = 0;
    while (inp[it] == inp[0]) it++;

    // Output group sizes
    cout << it << " " << n - it << "\n";

    // First group (all same smallest elements)
    for (int j = 0; j < it; ++j) cout << inp[j] << " ";
    cout << "\n";

    // Second group (remaining larger elements)
    for (int j = it; j < n; ++j) cout << inp[j] << " ";
    cout << "\n";
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) solve();
    return 0;
}
