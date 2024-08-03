#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(auto i:A) cout<<i<<" "
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
bool isPrime(int n){
    if(n==2 || n==3) return 1;
    if(n<0 || n&1==0 || n%3==0) return 0;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0) return 0;
    }
    return 1;
}
void solve(){
    int ans=0;
    int A=0,B=0;
    for(int a=-999; a<1000; a++){
        for(int b=-997; b<1000; b+=2){
            int n=0;
            while(true){
                if(!isPrime((n*n)+(a*n)+b)) break;
                n++;
            }
            if(n>ans){
                A=a;B=b;
                ans=n;
            }
        }
    }
    cout<<A*B<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}