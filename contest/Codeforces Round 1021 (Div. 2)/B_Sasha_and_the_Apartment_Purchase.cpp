#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int rem = n - k;
    if( n - rem < 0 ){
        cout<< 0 << endl;
        return;
    }

    if( rem & 1 ){
        int l = a[rem/2];
        int mid = n-rem + (rem / 2);
        int ll = a[mid];
        cout<< ll - l + 1 <<endl;
    }
    else{
        int l = a[rem/2 - 1];
        int r = a[rem/2];
        
        int ll = n-rem + (rem / 2 - 1);
        int rr = n-rem + (rem / 2);

        cout<< a[rr] - l + 1 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}