#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

bool check(v<v<char>>& a, int k, int I, int J){
    for(int i=0; i<9; i++) if(a[i][J]==k+'0') return 0;
    for(int j=0; j<9; j++) if(a[I][j]==k+'0') return 0;
    I-=I%3;J-=J%3;
    for(int i=I; i<I+3; i++){
        for(int j=J; j<J+3; j++){
            if(a[i][j]==k+'0') return 0;
        }
    }
    return 1;
}
bool fn(v<v<char>>& a, int i, int j){
    if(i==9) return 1;
    if(j==9) return fn(a,i+1,0);
    if(a[i][j]!='0') return fn(a,i,j+1);
    for(int k=1; k<10; k++){
        if(check(a,k,i,j)){
            a[i][j]=k+'0';
            if(fn(a,i,j+1)) return 1;
            a[i][j]='0';
        }
    }
    return 0;
}
int32_t main(){
    IOS
    ifstream cin("C:/Coding/Project Euler/p096_sudoku.txt");
    int ans=0;
    for(int i=0; i<50; i++){
        v<v<char>> a(9,v<char>(9));cin>>a;
        fn(a,0,0);
        int k=0;
        for(int j=0; j<3; j++) k=k*10+a[0][j]-'0';
        ans+=k;
        // cout<<a<<endl<<endl<<endl;
    }
    cout<<ans;
}
/*

*/