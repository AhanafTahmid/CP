#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x%2;
    }
    int ev = count(a.begin(),a.end(),0) > count(a.begin(),a.end(),1);
    if(ev) cout<< find(a.begin(),a.end(), 1) - a.begin() + 1 <<endl;
    else cout<< find(a.begin(),a.end(), 0) - a.begin() + 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}