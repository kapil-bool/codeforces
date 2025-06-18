#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solver() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int ab = 0, ba = 0;

        for(int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'a' && s[i+1] == 'b') ab++;
            if (s[i] == 'b' && s[i+1] == 'a') ba++;
        }

        // If already balanced, don't change
        if (ab != ba) {
            // At most one change is needed
            //first wale ko he karte hai iusually
            s[0] = (s[0] == 'a') ? 'b' : 'a';
        }

        cout << s << endl;
    }
}

int main() {
    solver();
    return 0;
}
