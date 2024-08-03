#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> dp;

ll cnt(ll n){
    if(n<1000001 && dp[n]) return dp[n];
    ll c;
    if(n&1) c=1+cnt(3*n+1);
    else c=1+cnt(n/2);
    return c;
}

int main(){
    dp.resize(1000001);
    dp[1]=1;
    int ans=-1;
    int max=-1;
    for(int i=2; i<1000001; i++){
        dp[i]=cnt(i);
        if(dp[i]>max){
            ans=i;
            max=dp[i];
        }
    }
    cout<<ans<<endl;
    cout<<dp[ans];
    return 0;
}