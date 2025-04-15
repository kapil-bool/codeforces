#include <bits/stdc++.h>

using namespace std;



#define int long long



int32_t main() {

  int t;

  cin >> t;



  while (t--) {

    int n;

    cin >> n;

     

    vector<int> nums;

    map<int, int> mp;

    int a=0;

    for(int i = 0; i < n; i++) {

      cin >> a;

      mp[a]++;

    }



    int x = mp.size();



    if(x>=3) {

      cout << "NO" << endl;

    }

    else if(x==1) {

      cout << "YES" << endl;

    }

    else {

      for(auto it : mp) nums.push_back(it.second);

      sort(nums.begin(), nums.end());



      nums[1] - nums[0] >= 2 ? cout << "NO" : cout << "YES";

      cout << endl;

    }

     

  }



  return 0;

}