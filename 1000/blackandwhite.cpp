#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int min_white = k; // Worst case: all k are white
        int white_count = 0;
        int left = 0, right = 0;

        while (right < n) {
            // Expand window to size k
            if (s[right] == 'W') white_count++;
            if (right - left + 1 < k) {
                right++;
            } else {
                // Window is exactly size k
                min_white = min(min_white, white_count);

                // Slide window forward
                if (s[left] == 'W') white_count--;
                left++;
                right++;
            }
        }

        cout << min_white << '\n';
    }
}

int main() {
    
    solve();
   
}
