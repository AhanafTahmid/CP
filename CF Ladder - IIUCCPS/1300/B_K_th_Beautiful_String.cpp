#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    int v = -1;
    for(int i=1;i<=n-1;i++){
        if(k-i<=0){v=i;break;}
        k-=i;
    }
    string s(n,'a');
    s[n-1-v] = s[n-k] = 'b';//0 base indexing
    cout<< s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}