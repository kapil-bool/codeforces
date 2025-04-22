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
        int odd_count=0;
        int even_count=0;
        for(int i=0;i<n;i++){
            if(a[i]==-1)odd_count++;
            else{
                even_count++;
            }

        }

        
        int operation = 0;

        // Fix product condition (odd_count must be even)
        while (even_count - odd_count < 0) {
            operation++;
            odd_count--;
            even_count++;
        }
        
        while (odd_count % 2 != 0) {
            operation++;
            odd_count--;
            even_count++;
        }

        // Fix sum condition (sum >= 0 → even_count - odd_count >= 0)

        cout << operation << endl;
    }
}
int main(){
    solver();
}