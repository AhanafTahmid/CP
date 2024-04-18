#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, q;cin>> n >> q;
    map<int, int> f;
    map<int, int> l;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(f[x]==0) f[x] = i+1;
        l[x] = i+1;
    }
    while(q--){
        int x, y;cin>>x>>y;
        if((f[x]!=0 && f[y]!=0) && (f[x]<f[y] || f[x]<l[y]))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}