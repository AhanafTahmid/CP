#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x, y; cin>>x>>y;
    vector<int>ans;
    for(int i=x;i>y;i--){
       ans.push_back(i);
    }
    for(int i=y;i<x;i++){
        ans.push_back(i);
    }
    cout<< ans.size() <<endl;
    for(int i=0;i<ans.size();i++)cout << ans[i] << " \n"[i==ans.size()-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}