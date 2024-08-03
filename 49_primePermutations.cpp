#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]
#define v(A) vector<int> A
#define vl(A) vector<ll> A
#define bl cout<<endl
using namespace std;
int some(vector<int>& A){int a=0;for(int i:A){a+=i;} return a;}
vector<int> primes(int n){
    vector<bool> A(n+1,1);
    vector<int> ans;
    for(int i=2; i*i<=n; i++) if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;
    for(int i=2; i<=n; i++) if(A[i]) ans.pb(i);
    return ans;
}
vector<int> prime(int n){
    vector<int> A(n+1,1);
    for(int i=2; i*i<=n; i++) if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;
    return A;
}
bool isVal(int a, int b, int c){
    string s1=to_string(a);
    string s2=to_string(b);
    string s3=to_string(c);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    return (s1==s2 && s2==s3);
}
int main(){
    int n;cin>>n;
    v(A)=primes(n);
    v(B)=prime(n);
    for(int i=168; i<A.size(); i++){
        for(int j=i+1; j<A.size(); j++){
            int a=A[i];
            int b=A[j];
            int d=b-a;
            int c=b+d;
            if(c<10000 && B[c] && isVal(a,b,c) && a!=1487){
                cout<<a<<b<<c<<endl;
                return 0;
            }
        }
    }
}
// 8753
// 7853
// 5783
// 578378538753