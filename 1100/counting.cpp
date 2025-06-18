#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
const ll MOD=1e9+7;

void solver(){
    int t;
    cin >> t;
    while(t--){
          int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    sort(b.begin(), b.end());
    ll answer=1;
    //all i have to do is find the no of ways i can get the a[i]>b[i] start from the back upperbound one which will tell all elm greater use that
    for( int i=n-1;i>=0;i--){
        //b traversal from back
        //no of elem
        ll  position=upper_bound(a.begin(),a.end() ,b[i])-a.begin();
        ll count=a.size()-position;
        ll used=n-1-i; //0 1 2 3 4 5 
        ll choices=count -used;
        if(choices<=0){
            answer=0;
            break;
        }
        answer=(answer*choices)%MOD;
    }
    cout<<answer<<endl;

    }
    
}

int main(){
    solver();
}