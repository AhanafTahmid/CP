#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int c = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        int v = c + x;
        int v2 = abs(c+x);
        c = max(v,v2);
    }
    cout<< c <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}