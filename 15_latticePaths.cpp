#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
// #define v(A) vector<int> A
// #define vl(A) vector<ll> A
#define v(A,n) vector<int> A(n)
#define vl(A,n) vector<ll> A(n)
using namespace std;
int main(){
    v(A,41);
    for(int i=0; i<41; i++){
        if(i<21) A[i]=1;
        else A[i]=i;
    }
    int a=20;
    while(a!=10){
        A[a*2]=2;
        a--;
    }
    A[27]=3;
    A[21]=3;
    A[25]=5;
    A[33]=11;
    ll ans=1;
    for(int i:A) ans*=i;
    cout<<ans/3840;
}
// to solve : (40*39*38*....*22*21)/20!
// 20 19 18 17 16 15 14 13 12 11
// 21 23 25 27 29 31 33 35 37 39
// 10 9 8 7 6 5 4 3 2 
// 10 8 6 4 2