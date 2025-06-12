#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<array<int, 3>> a;
    a.push_back({1, 1, n});
    for(int i=2;i<=n;i++){
        a.push_back({i, 1, n-i+1});
        if(n-i+2<=n)a.push_back({i, n-i+2, n});
    }
    //if(n%2)a.push_back({n, (n+1)/2, n});

    cout << a.size() << endl;
    for(auto x: a) cout << x[0] << " " << x[1] << " " << x[2] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}