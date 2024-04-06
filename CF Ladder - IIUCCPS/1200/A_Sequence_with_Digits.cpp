#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a, k;cin>>a>>k;
    int ans = 0;
    auto mnmx = [&](string v){
        auto [x,y] = minmax_element(v.begin(),v.end());
        return make_pair(*x - '0',*y - '0');
    };

    for(int i=0;i<k-1;i++){
        auto [mn, mx] = mnmx(to_string(a));
        a = a + mn*mx;
        if(!mn)break;
    }
    cout<< a <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}