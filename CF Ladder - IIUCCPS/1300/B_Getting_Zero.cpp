#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
//Approach:
1000000000000000
 110100000101110
//   10100000000000
//            10000
// // 0010100000000000
//  111111111111100

void solve(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        int t0 = 16 - __builtin_ctz(~x);
        int t1 = 32768 - x;
        int t2 = 16 - __builtin_ctz(x)-1;
        cout<< min({t0, t1, t2}) <<' ';
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}