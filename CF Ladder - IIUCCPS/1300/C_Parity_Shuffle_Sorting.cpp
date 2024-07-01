#include <bits/stdc++.h>  
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<pair<int, int>> vp;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            vp.push_back({i+1, i+2});
            a[i+1] = a[i];
        }
    }
    cout<< vp.size() <<endl;
    for(auto [x,y]:vp){
        cout<< x << ' ' << y <<endl;
    }
    //for(auto x: a)cout<< x << ' ';
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}