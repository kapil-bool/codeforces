#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        //make n from k , dont have x
        // i think it can be done something like if i x!=1 then its always possible else we can do somethink like module
        if(x!=1){
            cout<<"YES"<<endl;
            int c=n/1;
            cout<<c<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        
             
        else if(k==1||(k==2 and n%2==1) ){
                cout<<"NO"<<endl;
            }
             
             //lets manage other cases also
             //if n%2==0 isi se nipta raha hu
        else{   
            cout << "YES\n" << n / 2 << "\n";


               if(n%2==0){
                 for(int i=0;i<n/2;i++)cout<<2<<" ";
                 cout<<endl;

               }
               else{
                cout<<3<<" ";
                 for(int i=1;i<n/2;i++){
                    cout<<2<<" ";

                 }
                 cout<<endl;
               }
        }

        }
    }


int main(){
    solver();
}