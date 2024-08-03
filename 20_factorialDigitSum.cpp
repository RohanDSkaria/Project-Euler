#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]
#define v(A) vector<int> A
#define vl(A) vector<ll> A
#define bl cout<<endl
using namespace std;
int some(vector<int>& A){int a=0;for(int i:A){a+=i;} return a;}
void mul(vector<int>& A, int n){
    int c=0;
    for(int& i:A){
        int a=n*i+c;
        i=a%10;
        c=a/10;
    }
    while(c>0){
        A.pb(c%10);c/=10;
    }
}
int main(){
    int n; cin>>n;
    v(A);
    A.pb(1);
    for(int i=2; i<=n; i++) mul(A,i);
    pr(A);
    bl;
    cout<<some(A);
}