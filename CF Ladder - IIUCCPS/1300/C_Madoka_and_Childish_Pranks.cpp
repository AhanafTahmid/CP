#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>mat(n, vector<int>(m)), build(n, vector<int>(m));
    vector<pair<pair<int, int>, pair<int, int>>>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1lld",&mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(mat[i][j]!=build[i][j]){
                if(j-1>=0){
                    build[i][j] = 1;
                    build[i][j-1] = 0;
                    //push i,j-1, i,j in answer
                    ans.push_back({{i+1,j},{i+1,j+1}});
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            if(mat[j][i]!=build[j][i]){
                if(j-1>=0){
                    build[j][i] = 1;
                    build[j-1][i] = 0;
                    //push j-1,i,  j,i in answer
                    ans.push_back({{j,i+1},{j+1,i+1}});
                }
            }
        }
    }

    if(build==mat){
        cout<< ans.size() <<endl;
        for(auto [x,y]: ans){
            cout<< x.first << ' ' << x.second << ' ' << y.first << ' ' << y.second <<endl;
        }
    }
    else cout<<-1<<endl;
}

int32_t main(){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}