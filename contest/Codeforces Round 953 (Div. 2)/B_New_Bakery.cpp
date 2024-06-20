#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, a, b;cin>>n>>a>>b;
    auto c = [](int v){
        return (v*(v+1))/2;
    };
    if(b<=a) cout<< a*n <<endl;
    else {
        int use = b - a;
        if(use>n) cout<< (c(b) - c(b - n)) <<endl;
        else{
            cout<< (c(b) - c(a)) + (n-use)*a <<endl;
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