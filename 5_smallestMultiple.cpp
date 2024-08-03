#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
using namespace std;
vector<int> primes(int n){
    vector<bool> A(n+1,1);
    vector<int> ans;
    for(int i=2; i*i<=n; i++) if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;
    for(int i=2; i<=n; i++) if(A[i]) ans.pb(i);
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int> p = primes(n);
    int l=p.size();
    ll ans=1;
    bool c=1;
    for(int i=0;i<l; i++){
        int a=1;
        if(c){
            if(p[i]*p[i]<=n) a = floor(log(n)/log(p[i]));
            else c=0;
        }
        ans *=pow(p[i],a);
    }
    cout<<ans;
}
