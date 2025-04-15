//water one
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int t;
  cin>>t;
  int n;
  int count=0;
  while(t--){
    cin>>n;
    vector<string>store(n); //n size ka he hona chaiye
    //for input of string
    for(int i=0;i<n;i++){
        cin>>store[i];
    }
    //greedy baby girl
    // If at some moment cell i
//  i is empty and both cells i−1 and i+1 contains water, then it becomes filled with water.
    for(int i=0;i<n;i++){
       //test cases
       if(store[i]='.'){
         int count++;
       }
       while(i<n and store[i]='.'){
        count++;
        i++;
       }

    }



  }
  cout<<count<<endl;
}
int main(){
    solve();
    
}

