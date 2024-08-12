#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    if(a!=b && a!=vector<int>(b.rbegin(), b.rend())) cout<< "Alice" <<endl;
    else cout<< "Bob" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}