#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solver() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;
        ll total = p;  // at least one resident is informed directly

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<pair<int, int>> shares;
        for (int i = 0; i < n; i++) {
            shares.push_back({b[i], a[i]});
        }

        sort(shares.begin(), shares.end());  // sort by cost
        
        //now what i want is to allocate it only when it have a cost sammlarer than p in bi and the reamanig can be minused from n-1 n-1 bcz altlest one will be shared
        ll minimum=p;
        ll alreadyshared=1;//already one sse kar deiya 
        for( auto  ii :shares){
            long long sharing_cost=ii.first;
            long long can_beshared=ii.second;

            //condition is if the sahring cost isless than or eqiall to p to take it elser u leave it
            if(sharing_cost>=p){
                break; //already sorted hai so will follow;

            }
            if(alreadyshared+can_beshared>n){
                //u include it to a extend it dont pass it the n here i mean
                
                minimum+=(n-alreadyshared)*sharing_cost;
                alreadyshared=n; //all satisfied here
                break;
            }
            else{
                //already shared ko increament and so the cost;
                minimum+=can_beshared*sharing_cost;
                alreadyshared+=can_beshared;

            }

        }
        //chef will do 
        minimum+=(n-alreadyshared)*p;//cheaf can have it still
        cout<<minimum<<endl;
      
    }
}

int main() {
    
    solver();
}
