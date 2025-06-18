#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
void solver(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
      //start  from half bcz even if u increse one and decremt other they will repet afer a timw;
      //first condition jo mil jaye break there only after that the difference will increase and so will will not be a fit
      //a//b
      long long a = 1;
      long long b = n - 1;
      //for prime the above case will be there
      for (long long i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                a=n/i;
                b=n-a;
                break;

            }
        }

       
       //sabse best scenrio  both a and b arer from middle  if the modulo i s0 then it  is the min lcm no need to chek for other
      cout<<a<<" "<<b<<endl;
    }
}

int main(){
    solver();
}
/**/