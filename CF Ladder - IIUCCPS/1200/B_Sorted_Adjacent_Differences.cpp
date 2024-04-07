#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), ans;
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int m = n/2, l = m-1, r = m+1;
    ans.push_back(a[m]);
    while(l>=0 || r<n){
        if(l>=0){
            ans.push_back(a[l]);
            l--;
        }
        if(r<n){
            ans.push_back(a[r]);
            r++;
        }
        
    }
    for(int i=0;i<n;i++)cout<< ans[i] <<" \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}