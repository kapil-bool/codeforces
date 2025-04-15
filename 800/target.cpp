#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int helper(int x,int y){
    //helper  to calulate the markings on the matrix
    int r_value=min({x,y,9-x,9-y});
    return (r_value<5)?r_value+1:0;

}
void solver(){
      int t;
      cin>>t;
      while(t--){
        //input to lo
        vector<vector<char>> matrix(10, vector<char>(10));

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)
            cin>>matrix[i][j];
        }
        int count=0;
        //isko traverse kaunga and if i find a x will do someting
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)
            if(matrix[i][j]=='X'){
                count+=helper(i,j);

            }
        }
        cout<<count<<endl;
    }
    
}
int main(){
    solver();
}