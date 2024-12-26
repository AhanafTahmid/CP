#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    deque<int>dq(n);
    vector<int>ans;
    for(int &i: dq)cin>>i;
    while(q--){
        int x;cin>>x;
        auto it = find(dq.begin(),dq.end(),x);
        ans.push_back(it-dq.begin()+1);
        dq.erase(it);
        dq.push_front(x);
    }
    int ln = ans.size();
    for(int i=0;i<ln;i++){
        cout<<ans[i]<<" \n"[i==ln-1];
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}