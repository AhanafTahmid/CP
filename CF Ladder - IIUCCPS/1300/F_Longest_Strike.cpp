#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n),b;
    map<int, int> mp;
    set<int>st;
    for(int &i: a)cin>>i,st.insert(i), mp[i]++;
    for(auto x: st)b.push_back(x);

    int l = 0, r = 0, mx = 0, ll = 0, rr = 0;
    for(int i=0;i<b.size();i++){
        if(mp[b[i]]<k)l = 0, r = 0;
        else if(mp[b[i]]>=k && !l) l = b[i];
        else if(mp[b[i]]>=k) r = b[i];

        if(mx<(r-l)){
            mx = r-l;
            ll = l, rr = r;
        }
        if(i+1<n && b[i]+1!=b[i+1])l = 0, r = 0;
    }
    if(!ll){
        for(int i=0;i<b.size();i++){
            if(mp[b[i]]>=k){
                cout<< b[i] << ' ' << b[i] <<endl;
                return;
            }
        }
        cout<< -1 <<endl;
    }
    else cout<< ll << ' ' << rr <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}