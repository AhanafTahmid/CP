#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n);
    bool ok = 1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        ok = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                if( abs(a[i] - a[j]) % k == 0) ok = 0;
            }
        }
        if(ok){
            cout<< "YES" <<endl;
            cout<< i + 1 <<endl;
            return;
        }
    }
    cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}