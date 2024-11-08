#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int o = 0, z = 0;
    n+=n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        z+= x==0;
        o+= x==1;
    }
    if(z==0) cout<< 0 << ' ' << 0 <<endl;
    else if(o>z) cout<< o%2 << ' ' << z <<endl;
    else cout<< o%2 << ' ' << o <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}

