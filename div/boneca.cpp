#include<bits/stdc++.h>
using namespace std;
void solver(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;//lenght of lest cases
    vector<int>store(n);
    for(int i=0;i<n;i++){
        cin>>store[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++){
         long long xor_s=0;
        for(int j=0;j<n;j++){
            xor_s+=(store[i]^store[j]);
        }
        ans=max(ans,xor_s);
    }
    //now start the logic herer
    //brute force
    //zindabad
    cout<<ans<<endl;

 }

}
int main(){
  solver();
}