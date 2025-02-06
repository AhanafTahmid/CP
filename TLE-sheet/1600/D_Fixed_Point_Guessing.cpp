#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int l = 1, r = n, m;
    while(l<=r){
        m = (l+r)>>1;
        cout<< "? " << l << ' ' << m <<endl;
        int ct = 0;
        for(int i=l;i<=m;i++){
            int x;cin>>x;
            ct = ct + ( x>=l && x<=m);
        }
        if( ct%2 == 0 ) l = m + 1;
        else r = m;
    }
    cout<< "! " << l <<endl;
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}