#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
vector<vector<int>> prfx(200010, vector<int>(20));

void solve(){
    int l,r;cin>>l>>r;
    int ln = r - l + 1, mx = 0;
    for(int i=0;i<20;i++){
        mx = max(mx,prfx[r][i] - prfx[l-1][i]);
    }
    cout<< ln - mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=1;i<200010;i++){
        for(int j=0;j<20;j++){
            if((1<<j) & i) prfx[i][j] = prfx[i-1][j] + 1;
            else prfx[i][j] = prfx[i-1][j];
        }
    }
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}