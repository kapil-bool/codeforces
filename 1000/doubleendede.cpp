#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void solver(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        //find the the maxium possible substring it will have a lenght minus fro bboth a and b and that is ur answer also it should be minimu
        //minimu ko traverse karna better option hoga ig ess i have less comparisond

        ll ans=0; //return zero or the number greater cant take LLMAX
        for(ll smallen=1;smallen<=min(n,m);smallen++){
            for(ll i=0;i+smallen<=n;i++){
                for(ll j=0;j+smallen<=m;j++){
                    //now the substring part
                    //u found it also there is a substr function so
                    string fora=a.substr(i,smallen);//thie index specify tom check the particular range
                    string forb=b.substr(j,smallen);//thie index specify tom check the particular range
                    if(fora==forb){
                        ans=max(ans,smallen); //ok done tillm here
                    }
                }
               
            }
        }
        cout<<n+m-2*ans<<endl;
    }
}

int main(){
    solver();
}