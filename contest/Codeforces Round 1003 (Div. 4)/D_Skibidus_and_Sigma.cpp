#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<array<int, 2>>v;
    int ans = 0;
    for(int i=0;i<n;i++){
        vector<int>a(m);
        int prfx = 0, sum = 0;
        for(int &i: a)cin>>i, sum+= i, prfx+= sum + i;
        ans+= sum;
        v.push_back({prfx, sum});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++) ans += (n - 1 - i) * v[i][1];
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}