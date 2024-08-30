#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
//changes need in every step, so pass by reference
int ct1 = 0, ct2 = 0;
void dfs(int node, vector<int>adj[], map<int, int>mp){
    //ct1 = 0, ct2 = 0;
    if(mp[node]==1) ct1++;
    else ct2++;
    for(int x: adj[node]){
        cout<< x << ' ' << ct1 << ' ' << ct2 <<endl;
        dfs(x, adj, mp);
    }
    //cout << node <<endl;
    
    //if(ct1==ct2) ans++;
    //return ans;
}

void solve(){
    int n;cin>>n;
    vector<int>adj[n+3];
    int color = 0;
    vector<int>a(n-1);
    for(int &i: a)cin>>i;
    //for(int i=0;i<n;i++)cin>>a[i];
    string s;cin>>s;
    map<int, int>mp;

    for(int i=0;i<n;i++){
        if(s[i]=='W') mp[i+1] = 1;
        else mp[i+1] = 0;
    }

    for(int i=1;i<=n;i++){
        cout<< mp[i] << ' ';
    }
    cout<<endl;


    for(int i=0;i<n-1;i++){
        adj[a[i]].push_back(i+2);
    }

    dfs(1, adj, mp);
    //cout<< dfs(1, adj, mp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}