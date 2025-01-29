#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    set<int>st;
    bool ok = 0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x;
        if( st.count( x%m ) ){
            ok = 1;
        }
        st.insert(x%m);
    }
    if(ok){
        cout<< 0 <<endl;
        return;
    }
    int val = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            val*= abs(a[i] - a[j]);
            val%=m;
        }
    }
    cout<< val <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}