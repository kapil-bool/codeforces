#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
     int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string s;
        //R will always start and b is king of divider of group and will be best if it divide in eaual interval;
        //damm pigeonhole principle
       int length_of_red = r / (b + 1); //no of r min in one region
        int extra_red = r % (b + 1); //can keep rhem all in  one
        for (int j = 1; j <= b + 1; j++) 
        {
            for (int i = 0; i < length_of_red; i++)
                s += 'R'; //pushed the min 
            if (extra_red > 0)
            {   //only one at a time
                s += 'R';
                extra_red--;
            }
            //till here u have checked all the r filling possiblities
            //now just push the B 
            if (j != b + 1)
                s += 'B';
        }
        cout << s << endl;
    }
   

}

int main(){
    solver();
}