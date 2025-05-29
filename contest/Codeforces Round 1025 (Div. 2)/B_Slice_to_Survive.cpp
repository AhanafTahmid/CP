#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int x) {
    if (x == 0) return 0;
    bool is_pow = (x & (x - 1)) == 0;
    int bits = 32 - __builtin_clz(x);
    if (is_pow) bits--;
    return bits;
}

void solve(){
    int n, m, a, b;cin>>n>>m>>a>>b;
    int aa = min(a, n - a + 1), bb = min(b, m - b + 1);
    cout<< min( f(m) + f(aa), f(n) + f(bb)) + 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}