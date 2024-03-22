#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n+1);
    vector<int> vc[2005];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        vc[0].push_back(a[i]);
    }

    for(int ct=1;ct<=n;ct++){
        vector<int> fr(2005,0);
        for(int i=1;i<=n;i++){
            fr[a[i]]++;   
        }
        for(int i=1;i<=n;i++){
            a[i] = fr[a[i]];
            vc[ct].push_back(a[i]);
        }
    }

    int q;cin>>q;
    while(q--){
        int x,k;cin>>x>>k;
        if(k>n){
            cout<<vc[n][--x]<<endl;
        }
        else cout<<vc[k][--x]<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}