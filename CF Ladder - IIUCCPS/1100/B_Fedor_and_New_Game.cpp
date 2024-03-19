#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    int fedor;
    vector<int> a;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    cin>>fedor;
    int tmp, ans = 0;
    for(auto x: a){
        tmp = (x^fedor);
        if(__builtin_popcount(tmp)<=k)ans++;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}