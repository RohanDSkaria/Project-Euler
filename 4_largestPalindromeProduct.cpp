#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define endl '\n'
#define ll long long
using namespace std;
bool isPalin(int n){
    int k=n;
    int r=0;
    while(n>0){
        r = r*10 + n%10;
        n/=10;
    }
    return k==r;
}
int main(){
    int m=-1;
    for(int i=999; i>99; i--){
        int s; int b;
        if(i%11==0){
            b=999;
            s=1;
        }
        else{
            b=990;
            s=11;
        }
        for(int j=b; j>=i; j-=s){
            if(i*j<=m) break;
            if(isPalin(i*j)) m=i*j;
        }
    }
    cout<<m;
}