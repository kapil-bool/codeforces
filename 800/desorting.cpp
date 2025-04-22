#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        //check if sorted or not
        if(!is_sorted(a.begin(),a.end()))cout<<0<<endl;
        //now the main part is min asked;
       
        else{

            int min_diff = 1e9;
            for (int i = 1; i < a.size(); i++) {
                min_diff = min(min_diff, a[i] - a[i - 1]);
            }
            //so u will notice a increment of 2 in generrall
            cout<<(min_diff/2)+1<<endl;
        }
    }
}
int main(){
    solver();
}