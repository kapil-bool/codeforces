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
     vector<int>a(n);
     for(auto &i:a){
        cin>>i;
     }

    //prefix array
    vector<ll>prefix(n);
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    
    ll maxdiffer_ans=0;
    //now the grouping part
    for(ll k=1;k<=n;k++){
        //only if the modulo is 0
        if(n%k==0){
            //if there is a single elemeny
         ll beginn=k-1; //already one based indexing is there
         ll maxi=prefix[beginn];
         ll mini=prefix[beginn];
         //before this there should also be k elem
         //begin is actually starting from 1 only naa
         for(ll j=beginn+k;j<n;j+=k){
            ll sum=prefix[j]-prefix[j-k];  //for exzmple till 2 ka grp so prefix 4 tak kiya now minus the group from 1 ...2 ;
            maxi=max(maxi,sum);
            mini=min(mini,sum);
         }
         maxdiffer_ans=max(maxdiffer_ans,(maxi-mini));
        }
    }
     cout<<maxdiffer_ans<<endl;
     
    }
}

int main(){
    solver();
}
/*all possible k this is the question here
1. 1 ...... n/2  .......... n only the possiblites are 1 n and n/2 and all other n/2/2 which are divsors 
prefix sum can be used to calulate the sum and minus the remaing for the last max and min should i actually sort it?
there may be case whrre the and terms are not actually contributing anything then?
//so grp them and then look for max and min and then take the absoulte difference
*/