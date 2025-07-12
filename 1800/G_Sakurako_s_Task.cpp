#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin >> n >> k;
    int g=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        g=gcd(g,x);
    }
    if(n==1){
        int ans=k-1;
        if(g<=ans)ans++;
        cout << ans << endl;
        return;
    }
    if(g==0){
        cout << k << endl;
        return;
    }
    int ans=k-1;
    int cur=0,cnt=0;
    while(cnt<n&&cur<=ans){
        ans++;
        cur+=g;
        cnt++;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}