#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l, r;cin>>l>>r;
    int e = 0, o = 0;
    for(int i=l;i<=r;i++){
        o+= (i%2);
    }
    cout<< o/2 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}