#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    if(is_sorted(a.begin(),a.end()) || n&1) cout<< "YES" <<endl;
    else{
        for(int i=0;i<n-2;i++){
            int tmp = a.back() - a[i];
            a[i] = a.back();
            a[i+1] = a[i+1] + tmp;
            // cout<< tmp << " = ";
            // for(auto x: a)cout<< x << ' ';
            // cout<<endl;
        }
        if(a.back()>=a[n-2]) cout<<"YES"<<endl;
        else cout<< "NO" <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}