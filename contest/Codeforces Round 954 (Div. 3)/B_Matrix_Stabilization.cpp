#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int n,m;
bool check(int i, int j, vector<pair<int,int>>&a, vector<vector<int>>&mat){
    bool ok = 1;
    for(int k=0;k<a.size();k++){
        ok&= (mat[i][j] > mat[a[k].first][a[k].second]);
    }
    if(!ok) return 0;
    else return 1;
}
void solve(){
    cin>>n>>m;
    vector<vector<int>>mat(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vector<pair<int, int>>a;
            if(i>0)a.push_back({i-1,j});
            if(j>0)a.push_back({i,j-1});
            if(j+1<m)a.push_back({i,j+1});
            if(i+1<n)a.push_back({i+1,j});

            int mx = -1;
            if(check(i,j,a,mat)){
                for(auto [x,y]: a){
                    mx = max(mat[x][y], mx);
                }
                mat[i][j] = mx;
            }
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