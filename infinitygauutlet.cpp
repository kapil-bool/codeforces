#include<bits/stdc++.h>
using namespace std;
void solve(){
    unordered_map<string, string> mp = {
        {"purple", "Power"},
        {"green", "Time"},
        {"blue", "Space"},
        {"orange", "Soul"},
        {"red", "Reality"},
        {"yellow", "Mind"}
    };

    int n;
    unordered_set<string>st;
    cin>>n;
    for(int i=0;i<n;i++){
        string colour;
        cin>>colour; //ye bhi to store honge he
        st.insert(colour);
    }
    vector<string>reserve;
    
   
    //now the missing one;
    for (auto &i : mp) {
        if (st.find(i.first) == st.end()) {
            reserve.push_back(i.second);
        }
    }
   cout<<reserve.size()<<endl;
   for(auto i: reserve){
    cout<<i<<endl;
   }
    
}
int main(){
    solve();
    return 0;
}