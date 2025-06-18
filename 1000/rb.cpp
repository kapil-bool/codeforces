#include<iostream>
using namespace std;
#include<bits/stdc++.h>
 
void solver(){
     int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string s;
        //no of part of r
        int partion=n/(b+1);
        //now put all the b according to the partion and well filled fill all the reaming  with blues
        for(int i=partion;i<b;i+=partion){
            s[i]='B';
        }
        //now the remiang one
        for(int i=0;i<n;i++){
            if(s[i]!='B')s[i]='R';
            cout<<s[i]<<" ";
        }
   
        cout<<endl;
    }
 
}
//this wont handel that case so yes

 
int main(){
    solver();
}