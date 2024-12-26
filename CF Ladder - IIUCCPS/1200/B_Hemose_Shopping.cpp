#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>>n>>x;
    vector<int> a(n),b(n);
    for(int &i: a)cin>>i;
    b = a;
    sort(b.begin(),b.end());
    bool ok = (n/2) >= x || is_sorted(a.begin(),a.end());
    if(ok) cout<<"YES"<<endl;
    else{
        //first n-x , last n-x check
        for(int i=0;i<n;i++){
            if(i<x && i>n-x+1 && a[i]!=b[i])ok = false;
        }
        cout<< (ok?"YES":"NO") <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}