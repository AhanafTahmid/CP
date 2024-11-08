#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<char>>mat(n, vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>mat[i][j];
    }
    int ans = 0;
    vector<int>dx{ 0,  0, 1,-1};
    vector<int>dy{-1, +1, 0, 0};
    vector<char>nx{'1', '5', '4', '3'};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='1'){
                queue<pair<int,int>> q;
                q.push({i,j});
                int s = 0;
                while(!q.empty()){
                    int xx = q.front().first;
                    int yy = q.front().second;
                    q.pop();
                    if(s==0){
                        for(int k=0;k<4;k++){
                            int x = xx + dx[k];
                            int y = yy + dy[k];
                            if( x>=0 && x<n && y<m && y>=0  && mat[x][y] == nx[s]){
                                q.push({x,y});
                                s++;
                                break;
                            }
                        }
                    }
                    else if(s==1){
                        
                    }
                    else if(s==2){

                    }
                    else if(s==3){

                    }

                    if(s==4){
                        ans++;break;
                    }

                }

            }
        }
    }
    cout<< ans <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}