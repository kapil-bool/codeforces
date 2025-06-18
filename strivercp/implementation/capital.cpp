#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    string t;
    cin >> t;
    for(int i=0;i<t.size();i++){
        if(t[0]>='a' and t[0]<='z'){
            t[0]=t[0]-'a'+'A';
        }
    }
    cout<<t;

}

int main(){
    solver();
}