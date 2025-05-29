#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int> a(n), b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    int minus = count(b.begin(), b.end(), -1);
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    if( minus == n){
        cout<< mn + k - mx + 1 << endl;
        return;
    }

    set<int>st;
    bool ok = 1;
    for(int i=0;i<n;i++){
        if(b[i] != -1) st.insert(a[i] + b[i]);
    }

    for(int i=0;i<n;i++){
        if( b[i] == -1 ){
            if( *st.begin() - a[i] < 0) ok = 0;
            if( *st.begin() - a[i] > k) ok = 0;
            if(!ok) break;
        }
    }
    ok&=(st.size() == 1);

    cout<< (ok ? 1 : 0) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}