#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x;cin>>x;
    int v = 0;
    while (x) {
        v++;
        x /= 2;
    }
    cout<< max(3LL, v + v + 1) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}