#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int ans = 0;
    for(int i=0;i<n;){
        int j = i;
        while (j + 1 < n && a[j+1] == a[i]) j++;
        if( (i==0 || a[i-1] < a[i]) && (j + 1 == n || a[j+1] < a[i]) ) ans++;
        i = j+1;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}