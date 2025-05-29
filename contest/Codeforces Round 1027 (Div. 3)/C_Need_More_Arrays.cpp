#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), b;
    for(int &i: a)cin>>i;
    set<int>st(a.begin(), a.end());
    for(int x: st)b.push_back(x);
    int ans = 0;
    for(int i=0;i<b.size();){
        //cout<< b[i];
        if( i+1 < b.size() && b[i]+1<b[i+1] ) ans++, i++;
        else ans++, i+=2;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}