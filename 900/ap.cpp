#include <bits/stdc++.h>
using namespace std;

bool canMakeAP(int a, int b, int c) {
    // Case 1: Multiply a
    if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
        return true;

    // Case 2: Multiply b
    if ((a + c) % 2 == 0) {
        int m = (a + c) / 2;
        if (m % b == 0)
            return true;
    }

    // Case 3: Multiply c
    if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
        return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (canMakeAP(a, b, c) ? "YES" : "NO") << endl;
    }
    return 0;
}
