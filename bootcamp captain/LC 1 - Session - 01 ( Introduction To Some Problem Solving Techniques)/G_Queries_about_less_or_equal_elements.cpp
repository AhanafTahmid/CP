#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    while(m--){
        int x;cin>>x;
        cout<< upper_bound(a,a+n,x) - a <<" ";
    }
    cout<<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}