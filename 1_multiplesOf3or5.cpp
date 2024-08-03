#include <iostream>
#define endl '\n'
#define ll long long
using namespace std;
int main(){
    ll ans=0;
    for(int i=1; i<10000; i++) if(i%3==0 || i%5==0) ans+=i;
    cout<<ans;
}