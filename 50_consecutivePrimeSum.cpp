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
vb primes(int n){vb A(n+1,1);A[0]=A[1]=0;for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
void pre(v& A, int n){for(int i=1; i<n; i++) A[i]=A[i]+A[i-1];}

void solve(){
    vb isPrime = primes(1e6);
    v prime(546);
    int p=1;
    prime[0]=2;
    for(int i=3; p<546; i++){
        if(isPrime[i]){
            prime[p]=i+prime[p-1];
            p++;
        }
    }
    for(int i=545; i>=0; i--){
        int s=0,e=i;
        if(isPrime[prime[e]]){
            cout<<prime[e]<<endl;
            return;
        }
        s++;e++;
        while(e<=545){
            if(isPrime[prime[e]-prime[s]]){
                cout<<prime[e]-prime[s]<<endl;
                return;
            }
            s++;e++;
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