#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        //dekh prefix sum lagega isme so 
        int n,q;
        cin>>n>>q;
        vector<long long>a(n+1);//1 indexed le raha hu
        vector<long long >prefix(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            //yahi pe adjust kar deta hi  preefix
            prefix[i] = prefix[i - 1] + a[i];
        }
        while(q--){
            // queries hai 
            int l,r;  //range
            int k;   //new value deni hai jo
            cin>>l>>r>>k;
            
            long long prev_sum=prefix[r]-prefix[l-1];//perfeto;
            long long total_sum=prefix[n]-prev_sum+(l-r+1)*k;//total sumold -prevsum+in the range
            if(total_sum%2==0)
            cout<<"NO"<<endl;

            else
             cout<<"YES"<<endl;

            
        }
    }
}

int main(){
    solver();
}