#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int> mp, mp2;
    vector<int> a(n), b{1};
    for(int &i: a)cin>>i, mp[i]++;

    for(int i=0;i<=n;i++){
        int min_k = mp[i];
        int max_k = n - i;
        
        if (min_k <= max_k) {
            mp2[min_k]++;
            if(i) mp2[max_k + 1]--;
        }
        
        if(mp[i] == 0) break;
    }

    for(int i=1;i<=n;i++){
        b.push_back(b.back() + mp2[i]);
    }
    for(int x: b) cout << x << " ";
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}