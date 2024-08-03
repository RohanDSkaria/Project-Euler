#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A,n) for(int i=0; i<n; i++) cout<<A[i]<<" "
using namespace std;
vector<int> primes(int n){
    vector<bool> A(n+1,1);
    vector<int> ans;
    for(int i=2; i*i<=n; i++) if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;
    for(int i=2; i<=n; i++) if(A[i]) ans.pb(i);
    return ans;
}
int main(){
    vector<int> p=primes(2000000);
    ll s=0;
    for(int i:p) s+=i;
    cout<<s;
}