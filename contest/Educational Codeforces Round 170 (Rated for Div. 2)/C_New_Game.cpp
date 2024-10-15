#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    map<int, int>mp;
    int ans = 0;
    sort(a.begin(),a.end());
    int l = 0, r = 0;
    while(r<n){
        mp[a[r]]++;
        while(mp.size()>k){
            mp[a[l]]--;
            if(mp[a[l]]==0)mp.erase(a[l]);
            l++;
        }
        if(r-1>=0 && a[r]-a[r-1]>=2 ){
            mp.clear();
            mp[a[r]]++;
            l = r;
        }
        ans = max(ans, r-l+1);
        r++;
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


