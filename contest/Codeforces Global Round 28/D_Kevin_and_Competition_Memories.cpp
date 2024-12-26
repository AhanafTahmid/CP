#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n), b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i] = max(a[i], a[0]);
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
        if(b[i]<=a[0]) b[i] = 1e9 + 10;
    }

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    for(int i=0;i<m;i++){
        b[i] = a.end() - lower_bound(a.begin(),a.end(), b[i]);
    }

    for(int i=1;i<=m;i++){
        int ans = 0;
        for(int j=i;j<=m;j+=i){
            ans+= b[j-1] + 1;
        }
        cout<< ans << ' ';
    }
    cout<<endl;    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}