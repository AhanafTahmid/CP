#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a1,a2,a3,a4;cin>>a1>>a2>>a3>>a4;

    pair<int, int> a = {a2, a1};
    pair<int, int> b = {a3, a1};
    int ans = a1, mn;

    while(1){
        mn = min(a.first, b.first);
        if(mn == 0 )break;
        if(a.first<=b.first){
            if(a.first>a.second)a.first-=a.second;
            else a.first = 0, a.second 

        }
        
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}