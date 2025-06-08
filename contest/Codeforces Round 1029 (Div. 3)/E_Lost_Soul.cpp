#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;

    int ans = 0;
    map<int, int> cnt;
    for(int i=n-1;i>=0;i--){
        cnt[a[i]]++;
        cnt[b[i]]++;
        int x = cnt[a[i]] - 1 - (i + 1 < n && a[i] == b[i + 1]);
        int y = cnt[b[i]] - 1 - (i + 1 < n && b[i] == a[i + 1]);
        if( x || y){
            ans = i+1;
            break;
        }
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