#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c;cin>>a>>b>>c;
    vector<int>v{a,b,c};
    for (int i=1;i<=5;i++) {
        sort(v.begin(),v.end());
        v[0]+=1;
    }
    cout<< v[0]*v[1]*v[2] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}