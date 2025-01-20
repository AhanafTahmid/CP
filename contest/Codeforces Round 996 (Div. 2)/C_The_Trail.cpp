#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    string s;cin>>s;
    set<pair<int, int>> valid;
    vector<vector<int>>mat(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    valid.insert({0,0});
    for(int i=0,d=0,r=0;i<s.size();i++){
        if(s[i]=='R') r++;
        if(s[i]=='D') d++;
        valid.insert({d,r});
    }

    for(int i=0;i<n;i++){
        int s = 0, ok = 0;
        int x = 0, y = 0;
        for(int j=0;j<m;j++){
            s+= mat[i][j];
            if(!ok && valid.count({i,j})){
                x = i, y = j, ok = 1;
            }
        }
        if(ok && s!=0){
            mat[x][y] = -s;
            valid.erase({x,y});
        }
    }

    for(int i=0;i<m;i++){
        int s = 0, ok = 0;
        int x = 0, y = 0;
        for(int j=0;j<n;j++){
            s+= mat[j][i];
            if(!ok && valid.count({j,i})){
                x = j, y = i, ok = 1;
                valid.erase({j,i});
            }
        }
        if(ok){
            mat[x][y] = -s;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< mat[i][j] << ' ';
        }
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}