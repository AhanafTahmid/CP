#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    int ans = a;
    int v;
    for(int i=2;i<=b;i++){
        v = (a+i)/(i*i);
        ans+=v;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}