// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int n;

string ans="";
void solve(){
    cin>>n;
    // 1 ≤ a ≤ n.
   // If it's Mahmoud's turn, a has to be even, but if it's Ehab's turn, a has to be odd.
   //m even pick and the other one odd pick
 if(n%2==0){
    cout<<"Mahmoud";
 }
 else
 cout<<"Ehab";
   
}
int main(){
    //should i store it or directly?
    
    solve();
    
    return 0;
}