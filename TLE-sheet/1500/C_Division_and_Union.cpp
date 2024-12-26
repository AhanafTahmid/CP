#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector< array<int, 4 > > v;
    for(int i=0;i<n;i++){
        int l, r;cin>> l >> r;
        v.push_back({l, r, i, 2});
    }
    sort(v.begin(),v.end());
    int last = v[0][1];
    for(int i=0;i<n;i++){
        if( last >=  v[i][0] ){
            last = max(last, v[i][1]);
            v[i][3] = 1;
        }
        else break;
    }

    if( v[0][3] == v[n-1][3] ){
        cout<< -1 << endl;
        return;
    }

    sort(v.begin(),v.end(), [](array<int, 4 >a, array<int, 4 >b ){
        return a[2] < b[2];
    });

    for(auto x: v) cout<< x[3] << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}