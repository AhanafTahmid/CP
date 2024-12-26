#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x, y;cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(n&1) cout<< 1 <<endl;
    else{
        int x = a[n/2] - a[n/2 - 1] + 1;
        int y = b[n/2] - b[n/2 - 1] + 1;
        cout<< x * y <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}