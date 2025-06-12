#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int> a(n),b;
    for(int &i: a)cin>>i;
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<62;j++){
            if( (a[i] & (1LL << j)) == 0 ) b.push_back( (1LL << j) );
        }
    }
    sort(b.begin(), b.end());
    for(int i=0;i<b.size();i++){
        if( k>= b[i] ) k-=b[i], ans++;//1 bit kore baracchi
        else break;
    }

    for(int i=0;i<n;i++){
        int v = __builtin_popcountll(a[i]);
        ans+= v;
    }

    cout<< ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}