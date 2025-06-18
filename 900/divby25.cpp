#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int min_operations(string n,string possible_values){
    int operation=0;
    int indexcheker=possible_values.size()-1;//last se chek karunga
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==possible_values[indexcheker]){
            //you found your first one 
            indexcheker--;
            //when u reach the end of possible
            if(indexcheker<0){
                break; //already mil chuke hai
            }
        }
        else{
            operation++;
        }
    }
    //nahi found hue then what
    if(indexcheker>=0) operation =INT_MAX; //nahi mila
    return operation;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        // Valid two-digit endings for a number divisible by 25
        vector<string> possible_values = {"00", "25", "50", "75"};

        int ans = INT_MAX;
        for (auto val : possible_values) {
            ans = min(ans, min_operations(n, val));
        }

        cout << ans << endl;
    }

    return 0; //nahi mil raha
}