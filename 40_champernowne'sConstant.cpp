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
int F(int n){
        long long d=1;
        long long f=9;
        if(n<=d*f) return n;
        while(n>d*f){
            n-=d*f;
            d++;f*=10;
        }
        int k = n%d;
        if(k==0) return ((n/d)-1)%10;
        int t = pow(10,d-k);
        if(k==1) return ((n/(t*d))+1)%10;
        else return ((n/(t*d)))%10;
    }
void solve(){
    cout<<F(1)*F(10)*F(100)*F(1000)*F(100000)*F(10000)*F(1000000)<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}