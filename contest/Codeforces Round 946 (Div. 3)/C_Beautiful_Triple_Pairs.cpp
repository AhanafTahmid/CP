#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int &i: v)cin>>i;
    map<int, int> mp1, mp2,mp3;
    map<pair<int, int>, int> ab, bc, ac;
    map<tuple<int, int, int>, int> ab3, bc3, ac3;
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        int a = v[i];
        int b = v[i + 1];
        int c = v[i + 2];
        ab[{a, b}]++;
        bc[{b, c}]++;
        ac[{a, c}]++;
        tuple<int, int, int> triple = make_tuple(a, b, c);
        ab3[triple]++;
        bc3[triple]++;
        ac3[triple]++;
        ans += ab[{a, b}] - ab3[triple];
        ans += bc[{b, c}] - bc3[triple];
        ans += ac[{a, c}] - ac3[triple];
    }
    cout << ans<< '\n';


}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}