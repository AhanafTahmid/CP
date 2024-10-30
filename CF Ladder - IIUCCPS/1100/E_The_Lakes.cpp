#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int n,m;
bool vis[1005][1005]={};
int mat[1005][1005];
int sum = 0; 
bool isValid(int i, int j){
    return 0 <= i && i < n && 0 <= j && j < m;
}

int dx[]={-1,1,0, 0};
int dy[]={ 0,0,1,-1};

void bfs(int i, int j){
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j] = 1;
    while(!q.empty()){
        auto [x,y] = q.front();
        sum+=mat[x][y];
        q.pop();
        for(int k=0;k<4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(isValid(nx,ny) && mat[nx][ny]!=0 && !vis[nx][ny])q.push({nx,ny}),vis[nx][ny]=1;
        }
    }
}

void solve(){
    cin>>n>>m;
    memset(vis, 0, sizeof(vis));
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]!=0 && !vis[i][j]){
                sum = 0;
                bfs(i,j);
                ans = max(ans, sum);
            }
        }
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