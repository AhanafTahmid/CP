#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector v(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1lld", &v[i][j]);
        }
    }

    int ct = 0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            ct = 0;
            //intersecting == 3 == defect one
            ct+=( v[i][j] + v[i][j+1] + v[i+1][j] + v[i+1][j+1] );
            if(ct==3){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<< "YES" <<endl;
}

int32_t main(){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}