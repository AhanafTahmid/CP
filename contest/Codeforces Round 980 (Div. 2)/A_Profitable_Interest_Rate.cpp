#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    if(a>=b) cout<< a << endl;
    else{
        int l = 0, r  = a, m;
        while(l+1<r){
            m = (l+r)>>1;
            if( a - m <= b - 2*m ) l = m;
            else r = m;
        }
        if( a-l == b-2*l ) cout<< a - l <<endl;
        else cout<< 0 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}