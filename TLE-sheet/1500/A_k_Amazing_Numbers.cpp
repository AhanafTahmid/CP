#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
//Video TLE sheet 1500 in english may be kora

void solve(){
    int n;cin>>n;
    vector<int>a(n+1), dis(n+1,-1), prev(n+1), done(n+1), ans(n+1,1e6);
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++){
        //from 0 index
        if(dis[a[i]]==-1) dis[a[i]] = i;
        //from all inside index
        else{
            dis[a[i]] = max(dis[a[i]], i - prev[a[i]]);
        }
        prev[ a[i] ] = i;
    }

    //from n index ekbar
    for(int i=n-1;i>=1;i--){
        if( !done[a[i]] ) dis[a[i]] = max(dis[a[i]], n + 1 - prev[a[i]]), done[a[i]] = 1;
    }


    vector< array<int, 2> > v;

    for(int i=1;i<=n;i++){
        if(dis[i]!=-1)v.push_back({dis[i], i});
    }
    v.push_back({n+1, n});

    sort(v.begin(),v.end());

    //for(auto x: v)cout<< x[0] << x[1] <<endl;

    int ln = v.size(), st = v[0][0], minval = 1e6;
    for(int i=0;i+1<ln;i++){
        //cout<< v[i][0] <<endl;
        minval = min(v[i][1], minval);
        for(int j=v[i][0];j<v[i+1][0];j++){
            ans[ j ]  = min(ans[j], minval);
            //cout<< v[i][1])
        }
    }

    for(int i=1;i<=n;i++){
        if( ans[i] == 1e6 ) ans[i] = -1;
        cout<< ans[i] << " \n"[i==n];
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}