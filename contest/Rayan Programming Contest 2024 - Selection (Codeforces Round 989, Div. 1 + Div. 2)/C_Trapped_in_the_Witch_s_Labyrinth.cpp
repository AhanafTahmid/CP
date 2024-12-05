#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<vector<char>>mat(n, vector<char>(m));
    vector<vector<int>>visited(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>mat[i][j];
    }

    int ct = 0, ok = 0;
    vector<int>dx{ 0,  0, 1,-1};
    vector<int>dy{-1, +1, 0, 0};
    vector<char>d{'L', 'R', 'D', 'U'};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]!='?'){   
                for(int k=0;k<4;k++){
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if( x>=0 && x<n && y<m && y>=0 && !visited[x][y] && d[k]==mat[x][y]){
                        visited[x][y] = 1;
                    }
                }
            }
            
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visited[i][j]==1){   
                ct++;
            }
        }
    }

    cout<< n*m-ct <<endl;
    //cout<< ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}