#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n);
    int mx = 0;
    for(int &i: a)cin>>i, mx = max(mx, i);
    for(int i=0;i<m;i++){
        char ch;cin>>ch;
        int l,r;cin>>l>>r;
        if(ch=='+' && l<=mx && r>=mx) mx++;
        if(ch=='-' && l<=mx && r>=mx) mx--;
        cout<< mx << " \n"[i==m-1];
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}