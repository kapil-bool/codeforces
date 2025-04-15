#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
  //0 ko de diya
  //end and start given
  int t;
  cin>>t;
  while(t--){
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    //one day only one r−l=n
    //on mth day
    //r-l =m for the segment range as it satisy n so so should be true for m also
    //one positive
    for(int i=0;i<=r;i++){

        int left=-i;
        int right=left+m;
        if((-left+right)==m)cout<<left<<" "<<right<<endl;
        
    }
}


}
int main(){
    solve();
}