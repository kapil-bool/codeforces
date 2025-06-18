#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        //dekh operations a=a/b or b+=1 so the better is to do b++ as it will drastically reduce the a/b and i will be closer to the zero;
        //for question like these take a range of 40 to 60 standerdise only;
        //so iam thinking of setting b and then divivding a/b so it will let me to certain ans
        //still all possible are explored here
        int ans=INT_MAX;
        for(int i=0;i<40;i++){
            //new b
            ll newb=b+i;
            if(newb==1)continue; //no use only have to increamrnt
            int operation=i;
           
            ll NEw_a=a;
            while(NEw_a>0){
               operation++;
               NEw_a=NEw_a/newb;
            }
            ans=min(ans,operation);
        }
        cout<<ans<<endl;
    }
}

int main(){
    solver();
}