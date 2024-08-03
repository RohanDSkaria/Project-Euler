#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define endl '\n'
#define ll long long
using namespace std;

void pri(ll n){
    vector<ll> A;
    for(ll i=2; i*i<=n; i+=2){
        while(n%i==0){
            A.pb(i);
            n/=i;
        }
        if(i==2) i=1;
    }
    if(n>2) A.pb(n);
    for(int i=0; i<A.size(); i++) cout<<A[i]<<endl;
}

int main(){
    pri(600851475143);
}