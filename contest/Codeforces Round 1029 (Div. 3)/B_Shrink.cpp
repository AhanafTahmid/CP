#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a{1};
    for(int i=3;i<=n;i++){
        a.push_back(i);
    }
    a.push_back(2);
    for(int x: a){
        cout << x << " ";
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}