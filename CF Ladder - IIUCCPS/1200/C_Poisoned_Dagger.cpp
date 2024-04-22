#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mx = 1e19;

void solve(){
    int n, h;cin>>n>>h;
    vector<int> a(n), b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x;
        i?b.push_back(a[i]-a[i-1]):void(0);
    }

    b.push_back(mx - a.back());
    int l = 0, r = mx, m, v;
    while(l+1<r){
        v = 0;
        m = l + (r-l) / 2;
        for(int i=0;i<n;i++){
            v+=min(b[i],m);
        }
        if(v<h) l = m;
        else r = m;
    }
    cout<< r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}