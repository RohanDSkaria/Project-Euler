#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A,n) for(int i=0; i<n; i++) cout<<A[i]<<" "
using namespace std;
int main(){
    int n;cin>>n;
    int c=0;
    for(int a=1; a<n; a++){
        for(int b=a; b<n; b++){
            int c=n-a-b;
            if(a*a + b*b == c*c){
                cout<<a*b*c;
                break; c=1;
            }
        }
        if(c) break;
    }
}