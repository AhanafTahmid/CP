#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    int x = *st.begin(), y = *--st.end();
    if(st.size()==2 && abs(x-y)>1) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}