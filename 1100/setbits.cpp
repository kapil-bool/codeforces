#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
//make sure that the set bits at the possition dont give a result greater than that of favorite number
void verifer(const vector<ll>& shelf,ll & knowledge,ll &x){
    //set bits ke liye check kar with the help of k 
    for(auto i:shelf){
        if((i|x)==x){
            //valid hai
            knowledge|=i;
        }
        else
         break;
    }
}
void solver(){
    int t;
    cin >> t;
    while(t--){   //o(t)
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n),b(n),c(n);
        for(auto & i:a)cin>>i;  //o(n) idah
        for(auto & i:b)cin>>i;
        for(auto & i:c)cin>>i;
        ll knowledge=0;

        //it exited onces than cant be returened back to the self again
        if(k==0){
            cout<<"Yes"<<endl;
            continue;
        }
        //for 0 they wont run only
        verifer(a,knowledge,k);  //(worst case me 0(n)) idhar
        verifer(b,knowledge,k);
        verifer(c,knowledge,k);

        cout<<(knowledge==k ? "Yes": "No")<<endl;
    }
}

int main(){
    solver();
}