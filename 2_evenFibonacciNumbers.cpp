#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long
using namespace std;
int main(){
    ll ans=2;
    int a=1;
    int b=2;
    int n=3;
    while(n<4000001){
        if((n&1)^1) ans+=n;
        a=b;b=n;
        n=a+b;
    }
    cout<<ans<<endl;
    return 0;
}