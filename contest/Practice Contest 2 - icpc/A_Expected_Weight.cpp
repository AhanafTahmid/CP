#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int md = 998244353;
int power(int a, int b, int m) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a) %m;
        b >>= 1;
    }
    return res;
}

int inverse(int i){
    return power(i, md-2, md);
}

void solve(){
    int n; cin>>n;
    int v = ((n+1) * (n+1))%md;
    v = (v*n) % md;
    v = (v* inverse(4) ) % md;
    cout<< inverse(4) <<endl;
    cout<< 121286688930%md <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}