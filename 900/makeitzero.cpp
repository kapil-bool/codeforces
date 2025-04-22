#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solver(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>store(n);
    for(int i=0;i<n;i++){
        cin>>store[i];
    }
    //even odd cases are here
     if(n%2==0){
        //even hai
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
     }
   }

}
int main(){
    solver();
}