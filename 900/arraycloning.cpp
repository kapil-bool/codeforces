#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        unordered_map<int,int>freq;
        for(auto i :a){
            freq[i]++;
        }
        if(freq.size()==1){
            cout<<0<<endl;
        }
        else{
            int operation=0;
            // Choose any array and clone it. After that there is one more copy of the chosen array.
            // Swap two elements from any two copies (maybe in the same copy) on any positions.  
            int maxi=0;
            for(auto i:freq){
                maxi=max(maxi,i.second);
            }
            //now u have max here
            //swaps to jitne differ hai utne honge he
            //check how many are required
            //min duplicacly is when u reach n=swaps
            int swaps=n-maxi;
            int maxiaval=maxi;
            
            while(maxi<n){
                // maxi==n for for the condition to satisfy
                operation++; ////cloning hogi he for sure here
                //now to cases it become equal and it dont become equal
                if(maxi*2<=n){
                    operation+=maxi;//allthe copies get swap;
                    maxi=maxi*2;
                }
                else{
                    operation+=n-maxi;
                    maxi=n;
                }

            }
            cout<<operation<<endl;
            

        }
        //now the remaing part here




    }
}

int main(){
    solver();
}