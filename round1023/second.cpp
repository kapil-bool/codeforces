#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        
        long long total_apples = 0;
        long long min_apples = LLONG_MAX, max_apples = LLONG_MIN;
        
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
            total_apples += a[i];
            min_apples = min(min_apples, a[i]);
            max_apples = max(max_apples, a[i]);
        }

        //first is tom and odd for tom
        //if tom plays  first there is no way he loses

        if(max_apples-min_apples-1>k)
        cout<<"Jerry"<<endl;
        else{
            if(total_apples%2==0)cout<<"Jerry"<<endl;
            else
            cout<<"Tom"<<endl;
        }

    }
}

int main(){
    solver();
}