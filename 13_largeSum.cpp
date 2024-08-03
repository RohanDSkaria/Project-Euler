#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
using namespace std;
int main(){
    double b=0;
    for(int i=0; i<100; i++){
        double a;
        cin>>a;
        b+=a;
    }
    cout<<fixed<<setprecision(10)<<b;
}