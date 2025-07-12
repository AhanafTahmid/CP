#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a, b, x, y;cin>> a >> b >> x >> y;
    if( a == b ){
        cout<< 0 <<endl;
    }
    else if( a + 1 == b){
        if((a^1) == b)cout<< min(x, y) <<endl;
        else cout<< x <<endl;
    }
    else if( a>b) cout<< -1 <<endl;
    else if( a==1 ){
        
        cout<< min((b-a) * x, 1 + b) <<endl;
    }
    else{
        cout<< ((b-a) * x) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}