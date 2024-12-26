#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
//make video

void solve(){
    int n, a, b;cin>>n>>a>>b;
    vector<int>v(n),p(n);
    for(int &i: v)cin>>i;
    partial_sum(v.begin(),v.end(),p.begin());
    int ans = p[n-1] * b;
    for(int i=0;i<n;i++){
        int aeq = a * v[i];
        int beq = b * ((p[n-1] - p[i]) - (n-i-2) * v[i]);
        ans = min( ans, aeq + beq );
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