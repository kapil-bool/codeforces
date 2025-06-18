#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        a--,b--;
        //approch is find the minimum distance of major cites from a and b so cost will be only a to m +b to m and also compare the a to b just in case its less cost
        vector<ll>x_cordinate(n),y_cordinate(n);
        for(int i=0;i<n;i++){
            cin>>x_cordinate[i]>>y_cordinate[i];
        }
        //now the major one will start
        ll minifrom_a=LONG_LONG_MAX;
        ll minifrom_b=LONG_LONG_MAX;
        //integer overflow
        ll minibtwn_A_B= abs( 1ll* x_cordinate[a]-x_cordinate[b])+abs( 1ll *y_cordinate[a]-y_cordinate[b]);
        for(int i=0;i<k;i++){
            //fix the a and b and start minus from the k one
            minifrom_a=min(minifrom_a,( 1LL* abs(x_cordinate[a]-x_cordinate[i])+abs( 1LL* y_cordinate[a]-y_cordinate[i])));
            minifrom_b=min(minifrom_b,(abs( 1LL* x_cordinate[b]-x_cordinate[i])+abs( 1LL* y_cordinate[b]-y_cordinate[i])));

        }
        //only if there are major cites 
         if(k > 0)
        minibtwn_A_B=min(minibtwn_A_B,minifrom_a+minifrom_b);
        cout<<minibtwn_A_B<<endl;
    }
}

int main(){
    solver();
    
}