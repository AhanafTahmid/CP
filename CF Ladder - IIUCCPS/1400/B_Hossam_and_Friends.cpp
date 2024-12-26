#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    set<int>st;
    vector<int>v(n+1, 0);
    st.insert(1);
    while(m--){
        int x, y;cin>>x>>y;
        st.insert(x);
        st.insert(y);
    }
    int ans = 0;
    st.insert(0);
    st.insert(n+1);
    vector<int>a(st.begin(),st.end());
    n = a.size();
    for(int i=1;i<n-1;i++){
        ans+= ( (a[i]-a[i-1]) + (a[i+1]-a[i]) - 1);
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}