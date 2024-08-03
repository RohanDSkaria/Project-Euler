// https://projecteuler.net/problem=277
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
#define vs v<string>
#define vc v<char>
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
#define um unordered_map
#define us unordered_set
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
map<ll,ll> dp;
ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
string s="UDDDUdddDDUDDddDdDddDDUDDdUUDd";
bool fun(ll i){
    ll k=i;
    for(char c:s){
        if(k%3==0){
            if(c!='D') return 0;
            k/=3; 
        }
        else if(k%3==1){
            if(c!='U') return 0;
            k=(4*k+2)/3;
        }
        else{
            if(c!='d') return 0;
            k=(2*k-1)/3;
        }
        if(k==1) return 0;
    }
    return 1;
}
void solve(){
    cout<<4<<endl;
    int sum=0;
    for(ll i=1e15; i<(1e18)-4; i+=3){
        // if(fun(i)) {cout<<i<<endl;return;}
        sum++;
    }
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
/*

*/