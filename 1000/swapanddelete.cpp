#include<iostream>
using namespace std;

void solver(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        
        // Count occurrences of '0' and '1'
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') cnt1++;
            else cnt0++;
        }

        int operation = 0;

        // Try to match opposite characters as long as possible
        for(int i = 0; i < s.size(); i++){
            // Matching '0' with available '1'
            if(s[i] == '0' && cnt1 > 0){
                operation++;
                cnt1--;  // Decrease '1' count as it is matched
            }
            // Matching '1' with available '0'
            else if(s[i] == '1' && cnt0 > 0){
                operation++;
                cnt0--;  // Decrease '0' count as it is matched
            }
            else {
                // Break when no more opposite characters can be matched
                break;
            }
        }

        // The cost is how many characters are left unmatched
        cout << s.size() - operation << endl;
    }
}

int main(){
    solver();
}
