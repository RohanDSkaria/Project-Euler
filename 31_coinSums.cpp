#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
#define v vector<int>
using namespace std;
v dp;
v c;
int cnt(int n){
    for(int i:c) for(int j=i; j<=n; j++) dp[j]+=dp[j-i];
    return dp[n];
}
void solve(){
    cout<<cnt(200)<<endl;
}
int main(){
    int t=1;
    dp.resize(201,0);
    dp[0]=1;
    c={1,2,5,10,20,50,100,200};
    while(t--){
        solve();
    }
}
/*
f(200) = f(200-1)+f(200-2)+f(200-5)+f(200-10)+f(200-20)+f(200-)
7:
6           5 2
5       4 1
4     3
3   2
2 1
1
*/