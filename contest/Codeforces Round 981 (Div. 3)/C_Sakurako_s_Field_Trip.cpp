#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    for(int i=1;i<(n/2);i++){
        if(a[i]==a[i-1] || a[n-i-1]==a[n-i]){
            if( a[n-i-1]!= a[i-1] )swap(a[i], a[n-i-1]);
        }
    }
    int ans = 0;

    for(int i=0;i+1<n;i++){
        if(a[i]==a[i+1]) ans++;
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