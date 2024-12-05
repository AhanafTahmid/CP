#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void solve(){
    int n;cin>>n; 
    vector<int>a;
    int i,v = 1;
    for(i = 2;v<=1e12;i++){
        a.push_back(v);
        v*=i;
    }

    int ans = __builtin_popcountll(n);

    for(int i=0;i<(1<<15);i++){
        int s = 0, ct = 0;
        for(int j=0;j<14;j++){
            if( i & (1<<j) ) s+= a[j], ct++;
        }
        int v1 = __builtin_popcountll(n-s);
        if(s<=n)ans = min(ans, ct + v1);
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