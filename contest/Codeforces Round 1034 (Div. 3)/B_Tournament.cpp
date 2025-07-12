#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, j, k;cin>>n>>j>>k;
    j--;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    int v = a[j];
    sort(a.begin(), a.end());
    if( k == 1 && n>1 && v != a[n-1] ){
        cout << "NO" << endl;
        return;
    }
    cout<< "YES" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}