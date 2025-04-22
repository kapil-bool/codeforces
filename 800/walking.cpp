#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void solver(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        //minimum no is asked
        int count=0;//fixing y then adding the differnce bew the x cordinates
        if(b>d){
            cout<<-1<<endl;
        }
       
        //only y can be++ never be minused
        else{
            int y_setter=d-b;
            // count+=y_setter;
            //now the x part
            a+=y_setter;//here adjusted accordingly
            //now only left moves  can be done
            if(a<c){
                cout<<-1<<endl;
            }
            else
            cout<<y_setter+abs(c-a)<<endl;
            

        }




    //   cout<<count<<endl;
    }
    
}

int main(){
    solver();
}   