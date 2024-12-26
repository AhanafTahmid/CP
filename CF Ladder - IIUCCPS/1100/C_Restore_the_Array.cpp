#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    n--;
    vector<int>a(n);
    vector<int>ans;
    for(int &i: a)cin>>i;
    ans.push_back(*a.begin());
    for(int i=0;i<n-1;i++){
        ans.push_back(min(a[i],a[i+1]));
    }
    ans.push_back(a.back());
    n++;
    for(int i=0;i<n;i++)cout<<ans[i]<<" \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}