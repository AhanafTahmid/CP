#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int>v(32);
    int n;cin>>n;
    for(int i=31;i>=0;i--){
        v[i] = ((1<<i) &n)!=0;
    }

    for(int i=0;i<=31;){
        if(!v[i] || (v[i] && !v[i+1])){
            i++;
            continue;
        }
        v[i] = -1;
        i++;
        while(v[i]){
            v[i] = 0;
            i++;
        }
        v[i] = 1;
    }
    cout<< v.size() <<endl;
    for(auto x: v) cout<< x << ' ';
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}