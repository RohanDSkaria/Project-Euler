#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int ans=INT_MIN;
    v<vi> a(20,vi(20));cin>>a;
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(j>2) ans=max(ans,a[i][j]*a[i][j-1]*a[i][j-2]*a[i][j-3]);
            if(j<17) ans=max(ans,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
            if(i>2) ans=max(ans,a[i][j]*a[i-1][j]*a[i-2][j]*a[i-3][j]);
            if(i<17) ans=max(ans,a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
            if(j>2 && i<17) ans=max(ans,a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3]);
            if(j<17 && i<17) ans=max(ans,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
            if(j>2 && i>2) ans=max(ans,a[i][j]*a[i-1][j-1]*a[i-2][j-2]*a[i-3][j-3]);
            if(j<17 && i>2) ans=max(ans,a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/