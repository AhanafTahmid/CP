#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1e9+7;
int ans = 0;

int f(int n, priority_queue<int, vector<int>, less<int> >a, map<int, priority_queue<int, vector<int>, less<int> > >&mp){
    if(mp[a]) return mp[a];
    for(int i=1;i<=n;i++){

    }

}

void solve(){
    int n;cin>>n;
    //vector<vector<int>>
    priority_queue<int, vector<int>, less<int> >a;
    map<int, priority_queue<int, vector<int>, less<int> > > mp;
    cout<< f(n, a, mp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}