#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]<<" "
#define v vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vv vector<vector<int>>
#define vvl vector<vector<ll>>
#define bl cout<<endl
#define all(a) a.begin(),a.end()
using namespace std;
int some(v& A){int a=0;for(int i:A){a+=i;} return a;}
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb primes(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
void pre(v& A, int n){for(int i=1; i<n; i++) A[i]=A[i]+A[i-1];}

bool check(v A){
    if(A.size()!=4) return 0;
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(A[i]==A[j]) return 0;
        }
    }
    return 1;
}
v primeF(int n){
    v ans;
    if(!(n&1)) ans.pb(2);
    while(!(n&1)){
        n/=2;
    }
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) ans.pb(i);
        while(n%i==0){
            n/=i;
        }
    }
    if(n>2) ans.pb(n);
    return ans;
}
void solve(){
    for(int i=2; ; i++){
        if(check(primeF(i)) && check(primeF(i+2)) && check(primeF(i+3)) && check(primeF(i+1))){
            cout<<i<<endl;
            return;
        }
    }
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}