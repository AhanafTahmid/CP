#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    int allones = 0;
    
    vector<int>v[1010];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x; scanf("%1lld",&x);
            v[i].push_back(x);
            x==1? allones++: 0;
        }
    }

    int one = 0, two = 0;

    //pashapashi
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j+1<m && v[i][j]==v[i][j+1] && v[i][j]==0){two = 1; break;}
            else if(v[i][j]==0) one = 1;
        }
    }

    //upor niche
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if( j+1<n && v[j][i]==v[j+1][i] && v[j][i]==0){two = 1; break;}
        }
    }

    //cross
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j+1<m && i+1<n && v[i][j]==v[i+1][j+1] && v[i][j]==0){two = 1; break;}
        }
    }
    //cross - another side
    for(int i=0;i<n-1;i++){
        for(int j=m-1;j>0;j--){
            if(v[i][j]==v[i+1][j-1] && v[i][j]==0){two = 1; break;}
        }
    }

    //1. 2 or more 0's consecutive 2. 1 zero consecutive 3. all ones 4. all 0s
    if(two)cout<< allones <<endl;
    else if(one) cout<< allones - 1 <<endl;
    else if(allones==n*m) cout<< allones - 2 <<endl;
    else cout<< 0 <<endl;
}

int32_t main(){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}