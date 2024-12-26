#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a, b;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i>x) a.push_back(x),b.push_back(i);
    }
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i=0;i<b.size();i++){
        int up = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
        ans+=(b.size()-up);
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