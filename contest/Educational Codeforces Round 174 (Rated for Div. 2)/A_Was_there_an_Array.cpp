#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    n-=2;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    bool ok = 1;
    for(int i=1;i+1<n;i++){
        if(a[i-1] == 1 && a[i] == 0 && a[i+1] == 1){
            ok = 0;
            break;
        }
    }
    cout<< (ok?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}