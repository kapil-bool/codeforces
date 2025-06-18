#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//not reallly to be 900
void solver(){
    long long t;
    cin >> t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long>a(n);
        long long total=0;
        long long maximal=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
            maximal+=(a[i] + x - 1) / x;;
        }
        long long minimal=(total+x-1)/x;

        cout<<minimal<<" "<<maximal<<endl;
        
    }
}

int main(){
    solver();
}