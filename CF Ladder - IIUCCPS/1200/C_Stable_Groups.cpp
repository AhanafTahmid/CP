#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k,x; cin>> n >> k >> x;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    vector<int>b;
    for(int i=1;i<n;i++){
        b.push_back(max(0LL, (a[i]-a[i-1] - 1)/x ));
    }
    sort(b.rbegin(),b.rend());
    int ans = n;
    while(b.size() && b.back()<=k){
        ans--;
        k -= b.back();
        b.pop_back();
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