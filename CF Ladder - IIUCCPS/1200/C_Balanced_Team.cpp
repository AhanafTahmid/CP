#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());

    int l = 0, r = 0, ans = 0; 
    while(l<n){
        while(r<n && a[r]-a[l]<=5) r++;
        ans = max(ans, r-l);
        l++;
    }
    cout<< ans <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}