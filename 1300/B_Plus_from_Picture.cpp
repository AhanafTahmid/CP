#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<vector<int>> mat(n, vector<int>(m)),vis(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch cin>>ch;
            mat[i][j] = (ch == '*');
        }
    }

    int ct = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( mat[i][j] && vis[i][j] == 0 && i-1>= 0 && j - 1>= 0 && i+1 < n && j+1 < m && 
                mat[i][j-1] && mat[i][j+1] && mat[i-1][j] && mat[i+1][j] ){
                vis[i][j] = 1;
                vis[i][j-1] = 1;
                vis[i][j+1] = 1;
                vis[i-1][j] = 1;
                vis[i+1][j] = 1;

                for(int k=j;k>=0;k--){
                    if( mat[i][k] ){
                        vis[i][k] = 1;
                    }
                    else break;
                }
                for(int k=j;k<m;k++){
                    if( mat[i][k] ){
                        vis[i][k] = 1;
                    }
                    else break;
                }

                for(int k=i;k<n;k++){
                    if( mat[k][j] ){
                        vis[k][j] = 1;
                    }
                    else break;
                }
                for(int k=i;k>=0;k--){
                    if( mat[k][j] ){
                        vis[k][j] = 1;
                    }
                    else break;
                }
                ct++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( mat[i][j] && vis[i][j] == 0 ){
                cout<<"NO"<<endl;
                return;
            }
        }
    }


    cout<< (ct==1?"YES":"NO")<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}