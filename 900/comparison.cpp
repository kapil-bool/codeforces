#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        //implementation start
        //mimi
        int count=1;
        int max_len=1;//minimum ek to hoga he
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                 count++;
            }
            else{
                count=1;
                //there is a change
                
            }
            max_len=max(count,max_len);
        }
        cout<<max_len+1<<endl;
    }
}

int main(){
    solver();
}