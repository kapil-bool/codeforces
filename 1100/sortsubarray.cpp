#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(auto &i:a)cin>>i;
        for(auto &i:b)cin>>i;
        ll posible_start;
        ll posible_end;
        //start
        for(int i=0;i<n;i++){
           if(a[i]!=b[i]){
            posible_start=i;
           }
        }
        for(int i=n-1;i>=0;i--){
           if(a[i]!=b[i]){
            posible_end=i;
           }
        }
        // ll i=posible_start-1; here garbage will be accesed so leave this
        while(posible_start>0 and b[posible_start]>= b[posible_start-1]){
            posible_start--;
        }
        while(posible_end<n-1 and b[posible_end]<= b[posible_end+1]){
            posible_end++;
        }

        cout<<posible_start+1<<" "<<posible_end+1<<endl; //one indexing to be mainted;
    }
}

int main(){
    solver();
    /*1.find the change from both end they will be my posssible candidates
    2. now look for the sorted in both direction till u either at end or a bigger apper on the left or a smaller on the right*/
}