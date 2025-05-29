#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a,b,c;
    int v1 = 0, v2 = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(i&1)a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    for(int i=0;i<n;i++){
        if(i&1)c.push_back(a[v1++]);
        else c.push_back(b[v2++]);
    }
    
    for(int i=0;i<n;i++)cout<< c[i] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}