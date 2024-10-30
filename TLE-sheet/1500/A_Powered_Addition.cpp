#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;

    if(is_sorted(a.begin(),a.end())){
        cout<< 0 <<endl;
        return;
    }

    int mx = a[0], v = 0;

    for(int i=0;i<n;i++){
        if(mx==a[i]) continue;
        else if(mx<a[i]){
            mx = a[i];
        }
        else if(v < mx - a[i]){
            v = mx - a[i];
        }
    }

    int ans = 0;
    while(v>0){
        v/=2;
        ans++;
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