#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;

void  solver(){
    int t;
    cin >> t;
    while(t--){
        ll n,tries;
        cin>>n>>tries;
        //now input for the array
        vector<vector<ll>>matrix(n,vector<ll>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
        }
        ll notmatching=0;
        //now the logic part
        //to pointer here also for horizontal and vertiacal';
           
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // only count each symmetric pair once
                if (matrix[i][j] != matrix[n - 1 - i][n - 1 - j]) {
                    notmatching++; //but they will be double counted here so /2 here for actual count
                }
            }
        }
        notmatching=notmatching/2;
        if(notmatching>tries){
            cout<<"NO"<<endl;
            
        }
        else{
            //exactly k kar raha hai so after change remaing should be even otherwise no
            if((tries-notmatching)%2 ==0){
                cout<<"YES"<<endl;
            }
            else
            //now the centre one if odd can obsoreve one more so even can be done
            if(n%2==0)cout<<"NO"<<endl;
            else 
            cout<<"YES"<<endl;
        }
        
    }
}

int main(){
    solver();
    //passed
     //but test case like only single operation and no change may still be a problem only one elem when
}