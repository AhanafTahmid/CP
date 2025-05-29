#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(), a.end());
    int s = 0, s2 = 0, ct = 0;
    for(int i=0;i<n;i++){
        // if((a[i] - a[0]) >= k )s += (a[i] - a[0]);
        // else if( i>0 )s2+= (a[i] - a[0]);
        if( a[i] == a[n-1]) ct++;
        s+= a[i];
    }

    if (a[n-1] - a[0] > k) {
        if (ct == 1 && a[n-1] - 1 - a[0] <= k) cout << (s % 2 ? "Tom" : "Jerry") <<endl;
        else cout << "Jerry" <<endl;
    } 
    else cout << (s % 2 ? "Tom" : "Jerry") <<endl;
    
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}