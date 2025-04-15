//LINE TRIP
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
    int t;
    cin>>t; //number of test cases
    int  n,x;
    while(t){
        cin>>n>>x;
        vector<int>store(n);
        //take the input first
        for(int i=0;i<n;i++){
            cin>>store[i];
        }
        //greedy algo approch
        //diiference le le sabka and return the twice of max differnce
        //   start and end are fixed
        int prev=0; //start;
        int maxdifference=0;
     for(int i=0;i<store.size();i++){
        maxdifference=max(maxdifference,abs( (prev-store[i])));
        prev=store[i];
     }
     //ek last wale ke liye bhi bachega
     maxdifference = max(maxdifference, 2 * (x - prev)); 
     cout<<maxdifference<<endl;
      t--;
    }
    

}
int main(){
    solve();
    
}

