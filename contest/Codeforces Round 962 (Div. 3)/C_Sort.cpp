#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, q;cin>>n>>q;
    string a, b;cin>>a>>b;
    vector<vector<int>> pra(26, vector<int>(n+1, 0));
    vector<vector<int>> prb(26, vector<int>(n+1, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(j == a[i] - 'a') pra[j][i+1] = pra[j][i] + 1;
            else pra[j][i+1] = pra[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(j == b[i] - 'a') prb[j][i+1] = prb[j][i] + 1;
            else prb[j][i+1] = prb[j][i];
        }
    }

    while(q--){
        int l,r;cin>>l>>r;
        int ct = 0;
        for(int i=0;i<26;i++){
            ct+= abs( (pra[i][r] - pra[i][l-1]) - (prb[i][r] - prb[i][l-1]) );
        }
        cout<< ct/2 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}