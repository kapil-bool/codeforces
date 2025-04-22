#include <iostream>
using namespace std;

void solver() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        //there is no need for k it can also be a case
        //if %2 if 0 retur true else no;
        bool ok = false;
        for (int x = 0; x < 2; x++) {
            long long rem = n - x * k;
            if (rem >= 0 && rem % 2 == 0) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;


       
    }
}

int main() {
    solver();
    return 0;
}
