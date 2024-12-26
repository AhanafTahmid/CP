#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    vector<int> a(n);
    map<int, int> mp;
    int ans = 0;
    for(int &i: a) cin>>i;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)mp[a[i]]++;
    for(int i=0;i<n;i++){
        if(mp[a[i]]>=1){
            if(mp[x * a[i]]>=1)mp[x * a[i]]--, mp[a[i]]--; 
            else ans++, mp[a[i]]--;
        }
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