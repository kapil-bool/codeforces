#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    vector<vector<int>>matrix(5,vector<int>(5));
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>matrix[i][j];
    }
 }
 //implementation part from here
  //0 1 2 3 4  middle part hai 
  int x=0,y=0;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(matrix[i][j]==1){
            x=i;
            y=j;
        }
    }
 }
 cout<<abs(2-x)+abs(2-y);

}

int main(){
    solver();
}