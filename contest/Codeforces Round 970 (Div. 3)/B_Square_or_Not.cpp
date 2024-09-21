#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;scanf("%1lld", &x);
        a[i] = x;
    }
    int r = sqrt(n);
    if( r*r != n ){
        cout<<"No"<<endl;
        return;
    }
    vector<vector<int>>mat(r, vector<int>(r));
    for(int i=0,j=0;i<n;i++){
        mat[ j ][ i % r ] = a[i];
        if((i+1)%r==0)j++;
    }

    bool ok = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i==0 || i==r-1 || j == 0 || j == r-1 ){
                if(mat[i][j]==0){
                    ok = 0;
                    break;
                }
            }
            else{
                if(mat[i][j]==1){
                    ok = 0;
                    break;
                }
            }
        }
    }

    cout<< (ok?"Yes":"No") <<endl;
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}