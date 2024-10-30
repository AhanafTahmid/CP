#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x, y;cin>>x>>y;
    for(int i=0;i<=31;i++){
        bool t = (x & (1<<i)) == (y & (1<<i));
        if(!t){
            cout<< (1<<i) <<endl;
            return;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}