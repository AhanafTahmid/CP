#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool ok(int m, int k, int n, vector<int> &a){
    vector<int>mp(m,0);
    int tot = 0, ct = 0;
    for(int i=0;i<n;i++){
        if( a[i] < m && mp[a[i]]==0){
            mp[a[i]] = 1, tot++;
        }
        if( tot == m ){
            ct++;
            mp.assign(m, 0);
            tot = 0;
        }
    }
    return ct >= k;
}

void solve(){
    int n, k;cin>>n>>k;
    vector<int> a(n);
    for(int &i: a)cin>>i;

    set<int>st(a.begin(), a.end());
    int mex = 0;
    for(int i=0;i<st.size();i++){
        if( st.count(mex) ){
            mex++;
        }
        else break;
    }
    //cout<< mex <<endl;

    int l = 0, r = mex+1, m;
    while(l+1<r){
        m = (l+r)/2;
        int cnt = 0;
        if( ok (m, k, n, a)) l = m;
        else r = m;
    }
    cout << l << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}