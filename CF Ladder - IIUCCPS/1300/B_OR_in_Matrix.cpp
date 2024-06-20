#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>mat(n, vector<int>(m)), a(n, vector<int>(m)), b(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            bool ok1 = true, ok2 = true, ok3 = true, ok4 = true;
            for(int k=i;k<n;k++){
                if(mat[k][j]==0){
                    ok1 = false;
                    break;
                }
            }
            for(int k=i;k>=0;k--){
                if(mat[k][j]==0){
                    ok2 = false;
                    break;
                }
            }
            for(int k=j;k<m;k++){
                if(mat[i][k]==0){
                    ok3 = false;
                    break;
                }
            }
            for(int k=j;k>=0;k--){
                if(mat[i][k]==0){
                    ok4 = false;
                    break;
                }
            }

            if(ok1 && ok2 && ok3 && ok4){
                a[i][j] = 1;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                for(int k=i;k<n;k++){
                    b[k][j] = 1;
                }
                for(int k=i;k>=0;k--){
                    b[k][j]=1;
                }
                for(int k=j;k<m;k++){
                    b[i][k]=1;
                }
                for(int k=j;k>=0;k--){
                    b[i][k]=1;
                }
            }
        }
    }


    if(b!=mat)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< a[i][j] << ' ';
            }
            cout<<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}