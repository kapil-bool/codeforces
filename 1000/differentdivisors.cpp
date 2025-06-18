#include<iostream>
using namespace std;
#include<bits/stdc++.h>
typedef long long ll;
/* conclusiion so far
1. 1 and the n must amoung the 4 factors 
2. and the remaing one  must be prime 
3. so the n must be a multiple of prime 
4. now the main task is to choose the prime
*/
void solver(vector<ll>primes){
    int t;
    cin >> t;
    while(t--){
        ll d;
        cin>>d;

        // find the p and q?
        ll p=-1,q=-1;
        for(int i=0;i<primes.size();i++){
            if(primes[i]>=(1+d)){
                p=primes[i];
                break;
            }
        }
        //now the difference by p and q must be also same
         for(int i=0;i<primes.size();i++){
            if(primes[i]>=(p+d)){
                q=primes[i];
                break;
            }
        }
        //now the mini part p*p*p or p*q the first one is possible only if the p-q is to large
       cout << min(p * p * p, p * q) << endl;

    }
}

int main(){
    //sieve of prime 1e5
    vector<long long> primes;
    for (long long i = 2; i <= 100000; i++)
    {
        bool is_prime = true;
        for (long long j = 2; j * j <= i; j++) 
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            primes.push_back(i);
    }
    solver(primes);
}