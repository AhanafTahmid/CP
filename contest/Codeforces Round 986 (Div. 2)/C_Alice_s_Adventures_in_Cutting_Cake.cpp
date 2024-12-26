#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m ,u, mm;cin>> n >> m >> u;
    mm = m;
    vector<int>a(n), p(n), s(n);
    map<int, int> mp1, mp2;

    for(int &i: a)cin>>i;
    int s = 0, ct = 0;
    for(int i=0;i<n;i++){
        if(s>=u){
            mp[ct++] = 
        }
    }
    for(int i=n-1;i>=0;i--){
        (i!=n-1?s[i] = a[i] + s[i+1] : s[i] = a[i]);
    }
    reverse(s.begin(),s.end());

    for(int x: p) cout<< x << ' ';
    int ans = 0, done = 0;
    for(int i=0;i<n;i++){
        if(!m)break;
        if(p[i]>=u) m--;
    }


    cout<< ans << endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}