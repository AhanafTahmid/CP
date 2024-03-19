#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x; cin>>n>>x;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.rbegin(),a.rend());
    int v = 0, ans = 0;
    for(int i=0;i<n;i++){
        v+=a[i];
        if(v>=x) v-=x, ans++;
        else break;
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