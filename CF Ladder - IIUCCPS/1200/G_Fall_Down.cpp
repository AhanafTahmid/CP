#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<char> v[100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;cin>>ch;
            v[j].push_back(ch);
        }
    }

    vector<string> vs;
    for(int i=0;i<m;i++){
        string tmp = "";
        for(int j=0;j<m;j++){
            tmp += v[i][j];
        }
        vs.push_back(tmp);
    }

    for(int i=0;i<m;i++){
        int j = 0;
        for(int k=0;k<vs[i].size();k++){
            if(vs[i][k]=='*')continue;
            else if(vs[i][k]=='.'){
                j = k;
                while(k-1>=0 && vs[i][k]=='.' && vs[i][k-1]=='*'){
                    swap(vs[i][k], vs[i][k-1]);
                    k--;
                }
                k = j;
            }
            else break;
        }
        //cout<< vs[i] <<endl;
    }

    vector<char> ans[100];
    for(int i=0;i<m;i++){
        //string tmp = "";
        for(int j=0;j<m;j++){
            cout<<vs[i][j];
            //vs[j].push_back(vs[i][j]);
            //tmp += v[i][j];
            ans[i].push_back(vs[i][j]);
        }
        cout<<endl;
        //v[j].push_back(tmp);
    }

    //cout<< ans[0][0] <<endl;
    //cout<< ans.size() <<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            //cout<< ans[j][i];
        }
        //cout<<endl;
    }

    //for(auto x: vs)cout<<x<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}