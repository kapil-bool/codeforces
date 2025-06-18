#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    int sum=0;
    vector<string>s(t);
    for(int i=0;i<t;i++){
     cin>>s[i];
    }

    for(int i=0;i<t;i++){
        auto search=s[i];
        // if(search=faces.end()){

        // }
    }
    
       

    }


int main(){
    solver();
}