#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int m1 = INT_MAX;
    for(int &i: a)cin>>i;
    for(int i=0;i<n;i++){
        if(i-1>=0) m1 = min(m1, max(a[i],a[i-1])-1);
        if(i+1<n) m1 = min(m1, max(a[i],a[i+1])-1);
    }
    cout<< m1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}