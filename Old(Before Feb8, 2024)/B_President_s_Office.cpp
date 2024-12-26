#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    char c;
    cin>>n>>m>>c;
    char ch[200][2000];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch[i][j];
        }
    }
    set<char> aa;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ch[i][j]==c){
                //charpashe check
                if(i-1>0 && ch[i-1][j]!=c && ch[i-1][j]!='.'){
                    aa.insert(ch[i-1][j]);
                }
                if(i+1<=n && ch[i+1][j]!=c && ch[i+1][j]!='.'){
                    aa.insert(ch[i+1][j]);
                }
                if(j-1>0 && ch[i][j-1]!=c && ch[i][j-1]!='.'){
                    aa.insert(ch[i][j-1]);
                }
                if(j+1<=m && ch[i][j+1]!=c && ch[i][j+1]!='.'){
                    aa.insert(ch[i][j+1]);
                }
            }
        }
        cout<<endl;
    }
    cout<<aa.size()<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}