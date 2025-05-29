#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k; cin >> n >> k;
    string s;cin>>s;
    int o = count(s.begin(),s.end(), '1');
    int z = count(s.begin(),s.end(), '0');
    if( o >= n/2 - k && z >= n/2 - k && (z-(n/2-k)) % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}