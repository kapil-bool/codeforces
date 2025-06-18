//so here count the maximum consequtive and then the area part of will be done with the max count 
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;


void solver() {
    int t;
    cin >> t; 
    while (t--) {
        string s;
        cin >> s;
        ll count_one = 0;
        ll max_one = 0;
        ll n = s.size();

        
        for (ll i = 0; i < n; i++) {
            if (s[i] == '1') {
                count_one++;
                max_one = max(max_one, count_one);
            } else {
                count_one = 0; //reset here 
            }
        }

       //now check for the cycle one will move ++ other will be -- from back till 1  arer there
        if (s[0] == '1' && s[n - 1] == '1') {
            ll left = 0;
            while (left < n && s[left] == '1') left++;

            ll right = n - 1;
            while (right >= 0 && s[right] == '1') right--;

            max_one = max(max_one, left + (n - 1 - right));
        }

       
        if (max_one == n) {
            cout << n * n << endl;
            continue;
        }

       //middle and consecutive therefore one will be the seal and other will be the int 
        ll height=(max_one+1)/2;
        ll width=max_one/2;
        ll maxarea = height * width;
        cout << maxarea << endl;
    }
}

int main(){
    solver();
    /* pattern ban raha hai like hight * width 
            if its 6
             6 1 =6
             5 2 =10
             4 3 =12
             ..... and continue */
             //so should i try all possible combination till middle? actually it s max in the middle 1 2 3 4 5 6 1*6 ,4*3 ,
}