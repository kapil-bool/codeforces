#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
typedef long long ll;

int max_streak(const vector<int>& arr, unordered_map<int, int>& freq_map) {
    int n = arr.size();
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && arr[j] == arr[i]) {
            j++;
        }
        freq_map[arr[i]] = max(freq_map[arr[i]], j - i);
        i = j;
    }
    int max_len = 0;
    for (auto& [val, freq] : freq_map) {
        max_len = max(max_len, freq);
    }
    return max_len;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int& x : a) cin >> x;
        for (int& x : b) cin >> x;

        unordered_map<int, int> freq_a, freq_b;

        max_streak(a, freq_a);
        max_streak(b, freq_b);

        int result = 0;
        for (auto& [val, freq] : freq_a) {
            result = max(result, freq + freq_b[val]);
        }
        for (auto& [val, freq] : freq_b) {
            result = max(result, freq + freq_a[val]);
        }

        cout << result << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
