#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void solve(){
    vector<vector<char>>mat(9,vector<char>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(mat[i][j]=='9'){
                mat[i][j] = '1';
                break;
            }
        }
    }

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<< mat[i][j];            
        }
        cout<<endl;
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}