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

    int l = 0, r = n-1;
    while(a[l]==b[l])l++;
    while(a[r]==b[r])r--; 
    while(l-1>=0 && b[l]>=b[l-1])l--;
    while(r+1<n && b[r]<=b[r+1])r++;

    cout<< l+1 <<' '<<r+1<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}