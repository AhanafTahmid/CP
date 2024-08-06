#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2)a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a.size()==0 || b.size()==0)cout<< 0 <<endl;
    else{
        int bs = b.size();
        int mx = a.back();
        int up = upper_bound(b.begin(),b.end(),mx) - b.begin() - 1;
        if(up==-1) cout<< bs + 1 <<endl;
        else{
            for(int i=up;i>=0;i--)mx+=b[i];
            for(int i=up+1;i<bs-1;i++) if(b[i]<mx) mx+=b[i];
            if(mx>b.back()) cout<< bs <<endl;
            else cout<< bs + 1 <<endl;
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