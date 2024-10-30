#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    ll a,b,x,y;
    cin>> a >> b >> x >> y;
    ll gc = __gcd(x, y);
    x /= gc;
    y /= gc;
    cout<< min(a/x, b/y) <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}