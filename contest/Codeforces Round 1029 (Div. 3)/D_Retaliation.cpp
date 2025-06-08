#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a) cin>>i;
    bool ok = 1;
    int diff = a[1] - a[0];
    if( ( (a[0] - diff) % (n+1) ) ) ok = 0;
    if( ( (a[0] - diff) < 0 || (diff + (a[0]-diff)/(n+1)) < 0) ) ok = 0;

    for(int i=1;i<n;i++){
        if(a[i] - a[i-1] != diff){
            ok = 0;
            break;
        }
    }
    
    cout << (ok ? "YES" : "NO") << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}