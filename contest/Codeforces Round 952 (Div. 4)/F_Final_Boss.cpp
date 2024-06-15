#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int h, n;cin>>h>>n;
    vector<int>a(n),c(n);
    for(int &i: a)cin>>i, h-=i;
    for(int &i: c)cin>>i;
    if(h<=0){
        cout<< 1 <<endl;
        return;
    }
    int l = 0, r = 2e10,m,sum;
    while(l+1<r){
        m = (l+r)>>1;
        sum = 0;
        for(int i=0;i<n;i++){
            sum+=((m/c[i]) * a[i]);
        }
        if(h-sum>0){
            l = m;
        }
        else r = m;
    }
    cout<< r+1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}