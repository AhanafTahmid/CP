#include <bits/stdc++.h>
using namespace std;
char g[1000][1000];
void solve(){
    int r,c;
    cin>>r>>c;
    bool an = true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>g[i][j];
            an &= (g[i][j]=='B' || g[i][j]=='W' || g[i][j]=='G');
            //cout<<an<<" ";
        }
        cout<<endl;
    }
    
    if (!an) cout << "#Color" << endl;// if an = 0 then it is color or else black and white
    else cout << "#Black&White" << endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}