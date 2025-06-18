#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    
    // If the first and last cards are the same
    if (s[0] == s[n - 1]) {
        if (s[0] == 'A') {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
        return;
    }

    // For the case when there are exactly two cards
    if (n == 2) {
        if (s == "AB") {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
        return;
    }

    // Tracking frequency of Bob's cards and last occurrence of Alice's and Bob's cards
    int bfreq = 0;
    int lastA = 0, lastB = 0;

    // Iterate through the cards to find the necessary positions
    for (int i = 1; i < n; i++) {
        if (s[i] == 'A' && i < n - 1) {
            lastA = i;
        }
        if (s[i] == 'B') {
            bfreq++;
            lastB = i;
        }
    }

    // Special case where Bob has only one card and it's the last card
    if (bfreq == 1 && lastB == n - 1) {
        cout << "Alice" << endl;
        return;
        ///aaaab case in tt
    }

    // If Bob's last card appears after Alice's last card
    if (lastB > lastA) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
