#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), p(n+1);
    int a0 = 0, a1 = 0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        p[i] = x ^ p[i-1];
        a[i-1] = x;
    }
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0') a0^= a[i];
        else a1^= a[i];
    }
    
    int q;cin>>q;
    while(q--){
        int t;cin>>t;
        if(t==1){
            int l, r;cin>>l>>r;
            int v = p[r] ^ p[l-1];
            a0 ^= v;
            a1 ^= v;
        }
        else{
            int g;cin>>g;
            if(g==1) cout<< a1 <<' ';
            else cout<< a0 <<' ';
        }
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