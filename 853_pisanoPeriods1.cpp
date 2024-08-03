// https://projecteuler.net/problem=853
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vl v<ll>
#define vb v<bool>
#define vd v<double>
#define vvi v<v<int>>
#define vvl v<v<ll>>
#define bl cout<<endl
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " : " << x << endl;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb primes(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
vl fib;
vl dp;
ll f(int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1)+f(n-2);
}
// bool c3(int i){
    
// }
// bool c2(int i){

// }
// bool cc(int i){
    
// }
void solve(){
    fib.resize(241);
    fib[0]=0;
    ll temp=f(250);
    // cout<<dp;
    // fib=dp;
    // cout<<fib;
    // fib[0]=0;
    cout<<fib[0];
    // for(int i=1; i<241; i++) fib[i]=dp[i];
    // cout<<fib<<endl;
    // cout<<temp<<" "<<dp[3]<<" "<<dp[7]<<endl;
    // ll ans=0;
    // for(int i=1; i<1000000000; i++){
    //     vi
    //     if(cc(i)) ans+=i;
    // }
    // cout<<ans<<endl;
}
int main(){
    IOS
    dp.resize(241,-1);
    dp[0]=0;dp[1]=1;dp[2]=1;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
/*

*/