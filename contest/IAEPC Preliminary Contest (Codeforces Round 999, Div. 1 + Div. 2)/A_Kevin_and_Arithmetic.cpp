#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int e = 0, o = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x&1) o+=1;
        else e+=1;
    }
    int ans = e ;
    // cout<< e << o <<endl;
    // cout<< ans <<endl;
    ans+=o/=2;
    //else ans+= (e-o);
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}