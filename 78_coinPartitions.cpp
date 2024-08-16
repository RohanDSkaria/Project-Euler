#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
// #define int long double
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

string addd(const string& num1, const string& num2) {
    string result;
    int carry = 0, sum = 0;
    int len1 = num1.length(), len2 = num2.length();
    int i = len1 - 1, j = len2 - 1;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

string subt(const string& num1, const string& num2) {
    string result;
    int borrow = 0, diff = 0;
    int len1 = num1.length(), len2 = num2.length();
    int i = len1 - 1, j = len2 - 1;

    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        // Adjust digit1 for any borrow from the previous subtraction
        digit1 -= borrow;

        if (digit1 < digit2) {
            digit1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        diff = digit1 - digit2;
        result.push_back(diff + '0');
    }

    // Remove any leading zeros
    while (result.length() > 1 && result.back() == '0') {
        result.pop_back();
    }

    reverse(result.begin(), result.end());
    return result;
}

v<string> dp;
v<bool> penta;
void p(int n){
    // p(n) = p(n-1) + p(n-2) - p(n-5) - p(n-7) + p(n-12) + p(n-15) - p(n-22) - p(n-26) + ...
    
    // if(dp[n]!="") return dp[n];
    // string ans="0";
    // for(int i=1,ya=1,c=0; n>=i; i++){
    //     if(penta[i]){
    //         if(ya){
    //             ans=addd(ans,p(n-i));
    //             c++;
    //             if(c==2) c=0,ya=0;
    //         }
    //         else{
    //             ans=subt(ans,p(n-i));
    //             c++;
    //             if(c==2) c=0,ya=1;
    //         }
    //     }
    // }
    // return dp[n]=ans;

    for(int i=4; i<n; i++){
        for(int k=1,ya=1,c=0; i>=k; k++){
            if(penta[k]){
                if(ya) dp[i]=addd(dp[i],dp[i-k]);
                else dp[i]=subt(dp[i],dp[i-k]);
                c++;
                if(c==2) c=0,ya^=1;
            }
        }
    }
}
bool fn(string s){
    int n=s.size();
    for(int i=n-1; i>n-7; i--) if(s[i]!='0') return 0;
    return 1;
}
void solve(){
    dp.assign(1e6,"");
    penta.assign(1e6,0);
    dp[0]=dp[1]="1";
    dp[2]="2";dp[3]="3";
    int k=1,g=1,j=2;
    while(g<1e6 && j<1e6){
        penta[g]=1;
        penta[j]=1;
        k++;
        g=(3*k*k-k)/2;
        j=(3*k*k+k)/2;
    }
    p(60000);
    for(int i=50000; i<60000; i++){
        if(fn(dp[i])){
            cout<<i<<endl;
            break;
        }
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/