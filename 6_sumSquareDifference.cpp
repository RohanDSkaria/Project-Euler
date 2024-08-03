#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A,n) for(int i=0; i<n; i++) cout<<A[i]<<" "
using namespace std;
int main(){
    int n;cin>>n;
    int a=n*(n+1)*(2*n+1)/6;
    int b=n*n*(n+1)*(n+1)/4;
    cout<<b-a;
}