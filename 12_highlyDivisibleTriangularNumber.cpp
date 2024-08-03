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

// int fn(int n){
//     int c=0,k=sqrt(n);
//     for(int i=1; i<=k; i++) if(n%i==0) c++;
//     if(k*k==n) return c*2-1;
//     return c*2;
// }
void solve(){
    // int c=0,ans=-1;
    // for(int i=1; c<1e9; i++){
    //     c+=i;
    //     if(fn(c)>=500){
    //         ans=c;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;

    int c=0,t=0,a=1;
    while(c<=250){
        c=0;
        t+=a;
        a++;
        int k=sqrt(t);
        for(int i=1; i<=k; i++) if(t%i==0) c++;
    }
    cout<<t;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/