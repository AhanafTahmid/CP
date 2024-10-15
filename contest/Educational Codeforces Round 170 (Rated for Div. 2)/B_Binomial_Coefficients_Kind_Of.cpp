#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1e9 + 7;

int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%md;
        a = (a * a) %md;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n;cin>>n;
    vector<int>a(n), b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    for(int i=0;i<n;i++){
        cout<< power(2, b[i]) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}