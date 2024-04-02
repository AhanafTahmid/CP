#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    //edge cases, k = 0, k = n
    if(k==0){
        if(a[0]!=1)cout<< 1 <<endl;
        else cout<< -1 <<endl;
    }
    else if(k==n){
        int v = 1e9;
        cout<< v <<endl;
    }
    //rest cases
    else{
        k--;
        if(k+1<n && a[k]!=a[k+1]) cout<< a[k] <<endl;
        else cout<< -1 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}