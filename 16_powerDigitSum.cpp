#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]
#define v(A) vector<int> A
#define vl(A) vector<ll> A
#define bl cout<<endl
// #define v(A,n) vector<int> A(n)
// #define vl(A,n) vector<ll> A(n)
using namespace std;
int some(vector<int>& A){int a=0;for(int i:A){a+=i;} return a;}
void power(vector<int>& A, int n){
    int c=0;
    for(int& i:A){
        int a=n*i+c;
        i=a%10;
        c=a/10;
    }
    while(c>0){
        A.pb(c%10);c/=10;
    }
}
int main(){
    int a,n; cin>>a>>n;
    v(A);
    A.pb(1);
    for(int i=1; i<=n; i++) power(A,a);
    // pr(A);
    cout<<some(A);
}