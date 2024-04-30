#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> f(101,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        f[x]++;
    }
    int mx = *max_element(f.begin(),f.end());
    if(mx<k)cout<< n <<endl;
    else cout<< min(mx, k-1) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}