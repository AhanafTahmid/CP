#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int l = *max_element(a.begin(),a.end()), r = 1e10, m;
    int ans = l;
    int last = 0;
    while(l+1<r){
        m = (l+r)/2;
        bool ok = 0;
        for(int i=0;i+1<n;i++){
            int cnt = m - a[i];
            last = m - a[i];
            for(int j=i+1, t = 1;j+1<n;j++,t++){
                cnt+= max( m - t - a[j], 0LL);
                last = max( m - t - a[j], 0LL);
                if(last == 0) break;
            }
            if(cnt<=k && (a[n-2]+last <= a[n-1] + 1 || last==0) ) ok = 1;//check for less than k count and last element condition
            if(ok) break;
        }
        if(ok) l = m;
        else r = m;
    }

    cout<< l <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}