#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    int ans = 0, ct = 0;
    for(int i=0;i<n;i++){
        int v = a[i];
        if(mp[v]){
            ans++;
            while(1){
                mp[v]--;
                v++;
                if(mp[v]==0)break;
            }
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