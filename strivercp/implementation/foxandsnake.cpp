#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int n,m;
    cin >> n>>m;
    vector<vector<char>> matrix(n+1, vector<char>(m+1, '.')); 
    bool flag = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // fill entire row with '#'
            for (int j = 1; j <= m; j++) {
                matrix[i][j] = '#';
            }
        } else {
            if (!flag) {
                matrix[i][m] = '#'; // rightmost
                flag = 1;
            }
             else {
                matrix[i][1] = '#'; // leftmost
                flag = 0;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}

int main(){
    solver();
}