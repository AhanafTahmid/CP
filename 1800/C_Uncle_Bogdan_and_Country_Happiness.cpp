#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int N = 2e5;
vector<int> v;
vector<int> a(N+1), b(N+1);
vector<vector<int>> adj(N+1);
bool ok=true;
void dfs(int id,int p){
	int s=-a[id];
	for(auto x:adj[id]){
		if(x==p) continue;
		dfs(x,id);
		a[id]+=a[x];
		s+=b[x];
	}
	if((s+b[id])%2!=0) ok=false;
	if(s>b[id]) ok=false;
	if(b[id]>a[id]) ok=false;
}

void solve(){
	int n,m;cin >> n >> m;
	ok=true;
	for(int i=1; i<=n ;i++) cin >> a[i];
	for(int i=1; i<=n ;i++) cin >> b[i];
	for(int i=1; i<=n ;i++) adj[i].clear();
	for(int i=1; i<n ;i++){
		int x,y;cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1,0);
	cout << (ok ? "YES" : "NO") << endl;
}

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve(); 
	return 0;
}