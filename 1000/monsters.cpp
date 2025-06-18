#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//priorty keep on changing here so priorty que will work fine
void solver() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);

        for (auto &i : a) {
            cin >> i;
        }

        priority_queue<pair<ll, int>> pq;
        for (int i = 0; i < n; ++i)
            pq.push({a[i], -i});

        vector<ll> order;

        while (!pq.empty()) {
            pair<ll, int> top = pq.top();
            pq.pop();

            ll health = top.first;
            int idx = -top.second;

            health -= k;
            if (health > 0)
                pq.push({health, -idx});
            else
                order.push_back(idx + 1);
        }

        for (auto &i : order) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    solver();
}
