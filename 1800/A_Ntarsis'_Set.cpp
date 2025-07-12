#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int &i: a) cin >> i;
    int at=1,i=0;
    for(int j=0;j<k;++j) {
        at+=i;
        while(i<n and at>=a[i]) {
            ++at;
            ++i;
        }
    }
    cout << at << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}