#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,v;cin>>n;
    vector<int> a;
    for(int i=0;i<(1<<10);i++){
        v = 0;
        for(int j=0;j<10;j++){
            if(i & (1<<j)) v+= pow(3,j);
        }
        a.push_back(v);
    }

    int lw = lower_bound(a.begin(),a.end(),n) - a.begin();
    cout<< a[lw] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}