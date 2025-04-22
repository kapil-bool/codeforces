#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count=0;
        //lets go throught the logic
        bool three_present=false;
        for(int i=0;i<n;i++){
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.'){
                //found it  and no worries about the forward one
                three_present=1;
                // count+=2;
                break;
            
            }
            if(s[i]=='.'){
                count++;
            }
            
        }
        if(three_present){
            cout<<2<<endl;

        }
        else
        cout<<count<<endl;
    }
}

int main(){
    solver();
}