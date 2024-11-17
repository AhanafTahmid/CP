#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, a, b, x = 0, y = 0, ct = 1000;cin>>n>>a>>b;
    string s;cin>>s;
    while(ct--){
        for(char ch: s){
            if( ch == 'N' ) y++;
            else if( ch == 'E' ) x++;
            else if( ch == 'S' ) y--;
            else if( ch == 'W' ) x--;

            if(x == a && y == b){
                cout<< "YES" <<endl;
                return;
            }
        }
    }
    cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}