#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, r;cin>>n>>r;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int e = 0;
    for(int i=0;i<n;i++){
        e += a[i]/2;
        a[i] = a[i]%2;
    }
    int rem = r - e;
    int s = accumulate(a.begin(),a.end(),0LL);
    if(rem>=s) cout<< 2*e + s << endl;
    else{
        cout<< 2*e + abs(rem*2 - s) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}