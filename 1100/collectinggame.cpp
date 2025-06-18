#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        //so will maintain a score hre and check for the samller one and add them to the current element and then check for the elemnt on next index
        //prefix sum will work fine 
        // maybe pair as will sort and at last will give the output on the bases of index 
        ll n;
        cin>>n;
        ll elem;
        vector<pair<ll,ll>>a;
        for(int i=0;i<n;i++){
           cin>>elem;
           a.push_back({elem,i}); //pair ban gaye now sort them
        }
        sort(a.begin(),a.end());
        //prefix array
        vector<ll>prefix(n);
        //now rember for samllest can be like 1 1 1 1 2 3 so u cant just consider the that 1 is 0 equal elemnt also need to be there
        //count manage here ?
        //so lets just do the prefix first and then equal one can be added therfore this cant be the answwer one
        prefix[0]=a[0].first;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i].first;
            //so this is actually the score one here now the smaller and equal to but this will also be changing
        }
        //the finalll block
        vector<ll>final(n,0);
        for(int i=0;i<n;i++){
            int current=i; //in sorted array postion this will give count
            int count=i; //already the smaller one
            while(current<n){
                ll currentscore=prefix[current];
                pair<ll, ll> target = {currentscore + 1, LLONG_MIN};


                //nextposition must be to the greater one
                int nextposition=lower_bound(a.begin(),a.end(),target)-a.begin()-1;   //this was something new
                if (nextposition == current) break;
                count+=(nextposition-current);
                current=nextposition;

            }
            //push to aaccording of index of a 
            final[a[i].second]=count;

        }
        for (ll x : final) {
            cout << x << " ";
        }
        cout << endl;

    }
}

int main(){
    solver();
}