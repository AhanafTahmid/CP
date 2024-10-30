#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l,r;cin>>l>>r;
    string s;
    int ans = -1, diff = -1;
    for(int i=l;i<=min(l+100,r);i++){
        s = to_string(i);
        auto[x,y] = minmax_element(s.begin(),s.end());
        if(diff<=*y-*x){
            diff = *y-*x;
            ans = i;
        }
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