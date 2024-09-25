#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i; 
    sort(a.begin(),a.end());
    int s = accumulate(a.begin(),a.end()-1,0LL);
    if(s >= a[n-1] && (s+a[n-1])%2==0) cout<<"YES"<<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}