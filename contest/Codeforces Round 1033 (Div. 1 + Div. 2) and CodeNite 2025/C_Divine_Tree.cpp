#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<array<int, 2>> a;
    int s = (1LL * n * (n + 1)) / 2;
    if( n == 1 && m == 1) {
        cout << "1 1" << endl;
        return;
    }

    if( n > m || m > s) {
        cout << "-1" <<endl;
        return;
    }

    if( n == m) {
        cout << n << endl;
        for(int i = 2; i <= n; i++) {
            cout << 1 << " " << i << endl;
        }
        return;
    }

    int r = -1;
    for(int i = 1; i <= n; i++) {
        if( i == 1 && n+i-1 == m){
            r = 1;
            break;
        }
        else{
            int v = (i - 1) * (n - i) + (i-2) * (i-1) / 2;
            if( n-i+1<=m && m <= v + n - i + 1) {
                r = i;
                break;
            }
        }
    }

    if(r == -1) {
        cout << "-1" << endl;
        return;
    }

    a.push_back({r, 1});
    for(int i = 2; i <= n; i++) {
        if(i != r) a.push_back({1, i});
    }

    cout<< a[0][0] << endl;
    for(auto [x, y] : a) {
        cout << x << " " << y << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}