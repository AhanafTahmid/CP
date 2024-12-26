#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// The problem can be divided into two classic ones:
// Count the number of pairs 𝑎𝑖+𝑎𝑗≤𝑟;
// Count the number of pairs 𝑎𝑖+𝑎𝑗≤𝑙−1.

void solve(){
    int n, l, r;cin>>n>>l>>r;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        int lw = lower_bound(a.begin(),a.end(),l-a[i]) - a.begin();
        int up = upper_bound(a.begin(),a.end(),r-a[i]) - a.begin();
        cout<< a[i] << ' ' << lw << ' ' << up <<endl; 
        ans+=(up-lw);
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}