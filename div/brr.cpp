#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n));
        vector<int> store(2 * n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        // Fill store[i+j] = mat[i][j]
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                store[i + j] = mat[i][j];
            }
        }

        // Find missing number from 1 to 2n
        set<int> st(store.begin(), store.end());
        for (int i = 1; i <= 2 * n; i++) {
            if (st.find(i) == st.end()) {
                store[2 * n - 1] = i;
                break;
            }
        }

        // Print the final permutation
        for (int i = 0; i < 2 * n; i++) {
            cout << store[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
