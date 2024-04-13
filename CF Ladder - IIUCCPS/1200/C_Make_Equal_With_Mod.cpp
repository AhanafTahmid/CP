#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    bool f = 0, o = 0;
    for(int i=0;i<n;i++){
        if(a[i]==1) o = 1;
        if(i+1<n && a[i]+1==a[i+1]) f = 1;
    }
    cout<< ((o && f)?"NO": "YES") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}