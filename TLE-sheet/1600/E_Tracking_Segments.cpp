#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>l(m),r(m);
    for(int i=0;i<m;i++){
        cin>>l[i]>>r[i];
    }
    int q;cin>>q;
    vector<int>x(q);
    for(int &i: x)cin>>i;
    int left = 0, right = q+1, mid;
    while(left+1<right){
        mid = (left+right)>>1;
        vector<int>a(n+1);
        for(int i=0;i<mid;i++){
            a[x[i]] = 1; 
        }

        for(int i=1;i<=n;i++){
            a[i]+= a[i-1]; 
        }

        bool ok = 0;
        for(int i=0;i<m;i++){
            if( a[r[i]] - a[l[i] - 1] > (r[i] - l[i] + 1) / 2) ok = true;
        }
        if( ok ) right = mid;
        else left = mid;
    }

    if(right==q+1) right = -1;
    cout<< right <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}