#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t;
    cin >> t;
    while(t--){
      ll n,k,b,s;
      cin>>n>>k>>b>>s;
      vector<ll>ans(n,0);
      //ranges lie karingi basecially sum ki wo ranges hongi jaha par value of b dont chnage  all that value can be allocated
      ll minvalue=b*k;
      ll maxvalue=b*k+ (k-1)*n;
      if(s<minvalue || s>maxvalue)cout<<"-1"<<endl;
      else{
        //possible to hai but now how u will greedly deal with it
        //greedly work karenge
        //add the max first;
        ans[0]=(b*k);
        s-=minvalue;
        for(int i=0;i<n;i++){
            if(s>k-1){
                ans[i]+=k-1;
                s-=(k-1);
            }
            else{
                ans[i]+=s;
                s-=s;
            }
            
            
        }
        for (long long i = 0; i < n; i++) // n
                cout << ans[i] << " ";
            cout << endl;
      }
    }
}

int main(){
    solver();
}