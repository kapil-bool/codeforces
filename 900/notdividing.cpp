#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
			if(a[i] == 1){
				a[i]++;//if it does increment it
			}
		}

        for (int i = 1; i < n; i++) {
            while (a[i] % a[i - 1] == 0) {
                a[i]++;  
            }
           
        }
         //this wiill stay 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
//optimistion nedde if there is one from range 1 to n-1 then the possiblities is runned;