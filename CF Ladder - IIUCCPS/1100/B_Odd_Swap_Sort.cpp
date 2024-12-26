#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>o;
    vector<int>e;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x&1?o.push_back(x):e.push_back(x);
    }
    if(is_sorted(o.begin(),o.end()) && is_sorted(e.begin(),e.end())){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}