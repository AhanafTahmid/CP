#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
void solve(){
    int n, e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        //adj[y].push_back(x);
    }   
    for(int i=1;i<=n;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<i<<" "<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}