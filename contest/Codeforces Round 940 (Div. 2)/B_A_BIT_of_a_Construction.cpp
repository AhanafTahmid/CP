#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    int v = 0, ct = 0, v1 = 0, v2 = 0;
    while(1){
        bitset<32>bset(string(ct,'1'));
        v = bset.to_ulong();
        if(v>k)break;
        v1 = v;
        ct++;
    }
    if(n>1){
        v2 = k - v1;
        cout<< v1 << ' ' << v2 << ' ';
        for(int i=3;i<=n;i++) cout<< 0 << ' ';
        cout<<endl;
    }
    else cout<< k <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}