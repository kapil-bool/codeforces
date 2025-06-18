#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,nk;
        cin>>n>>k;
        nk=n*k;
        vector<long long>a(nk);
        for(int i=0;i<nk;i++){
            cin>>a[i];
        }
        long long median=(n+1)/2; //ceil value for the median

        long long total=0;
        int traveler=nk-(n-median+1);//correct hai ye;
        //bettter this way how many groups u want to make
        for(int i=0;i<k;i++){
            //first medain from end is 
            total+=a[traveler];
            //now reset the travelere;
            traveler-=n-median+1;

        }
        cout<<total<<endl;

    }
}

int main(){
    solver();
}
//how the ceil value of medain is actually handeeld here is the main type