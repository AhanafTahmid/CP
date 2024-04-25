#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    vector<int> a,b;
    int vis[1005] = {};
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
        if(!vis[x])a.push_back(x), vis[x] = 1;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    int l = 0, ans = 0;
    while(1){
        for(int i=0;i<n;i++){
            if(a[l] == b[i]){
                mp[a[l]]--;
                if(mp[a[l]]==0)l++;
                cout<< i << ' ';
            }
        }
        cout<<endl;
        //cout<< l <<endl;
        //ans++;
        if(l==a.size())break;
        
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}