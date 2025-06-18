#include <iostream>
#include <vector>
#include <numeric>  // for std::accumulate
#include <algorithm> // for std::gcd
using namespace std;

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // Modify the array based on the positions
        for(int i = 0; i < n; i++){
            a[i] = abs(a[i] - (i + 1));  // Taking absolute difference with 1-based index
        }

        // Now, take the GCD of all values in the array
        int ans = accumulate(a.begin(), a.end(), a[0], [](int x, int y) {
            // return gcd(x, y);
        });

        // Output the result
        cout << ans << endl;
    }
}

int main(){
    solver();
    return 0;
}
