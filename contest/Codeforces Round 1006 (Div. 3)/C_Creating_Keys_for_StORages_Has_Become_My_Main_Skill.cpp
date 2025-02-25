#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>>n>>x;
    vector<int>a{x};
    n--;
    int v = x;
    for(int i=0;i<n;i++){
        int vv = (v | i);
        if( vv <= x) a.push_back(i);
        else break;
        v|=i;
    }

    n++;
    while( a.size() != n ) a.push_back(x);
    sort(a.begin(),a.end());
    v = 0;
    for(int i=0;i+1<n;i++) v|= a[i];
    if( ( v|(n-1) ) == x ) a.pop_back(), a.push_back(n-1);

    for(int x: a)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}