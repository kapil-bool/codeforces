#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solver() {
    int t;
    cin >> t;
    while (t--) {
        ll w, h;
        cin >> w >> h;

        ll max_area = 0;  

        // We have 4 sides, so loop 4 times
        for (int side = 0; side < 4; side++) {
            ll k;
            cin >> k;
            ll first, last;
            for (int i = 0; i < k; i++) {
                ll x;
                cin >> x;
                if (i == 0) first = x;
                if (i == k - 1) last = x;
            }
            ll base = last - first;

            ll height;
            if (side == 0 || side == 1)  //for x axis
                height = h;
            else  //  ya xis hai ye
                height = w;

            ll area = base * height;
            if (area > max_area) max_area = area;
        }

        cout << max_area << endl;
    }
}

int main() {
    
    solver();
}
