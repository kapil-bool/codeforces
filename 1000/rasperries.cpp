#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    ll t;
    cin >> t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       vector<int>a(n);
        ll counteven=0;
        ll ans=LLONG_MAX;
        

       //for 2 one even must be there for 3 3k and 4k 4k and 5k for k else take the modulus of that and minus from k and reeturn it as the answwr
       //isme to k size is quite small but what if its too latge u wont be computing it always;
       //    if(a[i]%k==0 ) break in this condition else keep the max track and minus it from k;
       for(int i=0;i<n;i++){
          cin>>a[i];  
          if(a[i]%2==0)counteven++; 
       }
       for(int i=0;i<n;i++){
          if(a[i]%k==0){
            ans=0;
            break;
          }
        ans=min(ans,(k-(a[i]%k)));
       }
       if(k==4){
        // product of 2 number is always divivsible by 4 
         if(counteven>=2)ans=0;
          else if(counteven==1) ans=min(ans,1ll); //only one more addition  opperation is requred
         else if(counteven==0) ans=min(ans,2ll); //make the odd even  so bascallly just 2 opertion can be min
       }
       cout<<ans<<endl;
    }
}

int main(){
    solver();
}