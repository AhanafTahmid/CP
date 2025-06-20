#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin >> n;
    vector<int> a(n+1);
    int s=0, m=0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        s += a[i];
        m = max(m, a[i]);
    }
    if(m+m > s){
        cout << "T" << endl;
    } else{
        if(s%2) cout << "T" << endl;
        else cout << "HL" << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}