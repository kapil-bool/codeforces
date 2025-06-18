#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll ans=0;
      //operation logic here
      unordered_map<char,int>mp;
      vector<ll>prefix(n,0);
      //different one will for sure contribute

      for (int i = 0; i < n; i++) {
            mp[s[i]]++;         // Count frequency of character s[i]
            if (mp[s[i]] == 1)  // If this character appeared for the first time
                ans++;          // Increase distinct character count
            prefix[i] = ans;    // Store number of distinct chars in prefix s[0..i]
        }
      ll sum=0;
     for(auto i:prefix){
        sum+=i;
     }
     cout<<sum<<endl;
    }
}

int main(){
    solver();
}