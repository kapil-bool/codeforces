#include <iostream>
using namespace std;

void solver() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        for (char c : s) {
            if (c == '1') count++;
        }
       
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ans += count + 1;
            } else {
                ans += count - 1;
            }
        }

        cout << ans << endl;
    }
}

int main() {
    solver();
    return 0;
}
