#include <bits/stdc++.h>
using namespace std;
//lets see where is the problem

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        while (i < p.size() && j < s.size()) {
            if (p[i] == s[j]) {
                if (j + 1 < s.size() && s[j + 1] == s[j]) {
                    j += 2;
                } else {
                    j++;
                }
                i++;
            } else {
                break;
            }
        }

        cout << ((i == p.size() && j == s.size()) ? "YES" : "NO") << endl;
    }
}

int main() {
    solve();
    return 0;
}
