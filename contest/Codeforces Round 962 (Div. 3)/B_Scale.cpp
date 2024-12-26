#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;scanf("%1lld",&x);
            mat[i][j] = x;
        }
    }

    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            cout<< mat[i][j];
        }
        cout<<endl;
    }

}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}