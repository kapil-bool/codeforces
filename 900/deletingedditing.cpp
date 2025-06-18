#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin >> n;  // Number of test cases
    while(n--){
        string s, t;
        cin >> s >> t;  // Read initial and final words
        //dekh isme ye hamsera hoga ki kuch batche he naa
        //order can be random
        //DAM QUESTIO IS SUPER GOOD
        //similution he hai but still
        int n = s.size();
        int m = t.size();
        vector<int>frequency(26,0);
        //store the one in the t
        for(auto i:t){
            frequency[i-'A']++;
        }
        //now just keep the last one present in the s string
        for(int i=n-1;i>=0;i--){
            //it should be in freq 
            if(frequency[s[i]-'A']>0){
                frequency[s[i]-'A']--;
            }
            else{
                s[i]='.';
            }
        }
        //now your string s is modified accirdinly
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!='.')ans+=s[i];
        }

        if(ans==t)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
      

       
    }
}

int main(){
    solver();
    return 0;
}
