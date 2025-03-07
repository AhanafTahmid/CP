#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<vector<char>>mat(n, vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>mat[i][j];
    }

    for(int i=0;i+1<n;i++){
        for(int j=0;j<m;j++){
            int last = n, cnt = 0;
            for(int k=i;k<n;k++){
                if( mat[k][j] == '*') cnt++;
                else if( mat[k][j] == 'o'){
                    last = k;
                    break;
                }
            }
            for(int k=last-1;k>=i;k--){
                if( cnt>0)mat[k][j] = '*',cnt--;
                else mat[k][j] = '.';
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<mat[i][j];
        cout<<endl;
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}