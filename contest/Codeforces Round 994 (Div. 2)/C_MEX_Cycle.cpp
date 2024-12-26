#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x, y;cin>>n>>x>>y;
    vector<int>a(n+1);
    a[y] = 2;
    for(int i=1;i<=n;i++){
        if(y==i)continue;
        if(i-1>=0){
            if(a[i-1]==2){
                if(i-2>=0){
                    if(a[i-2]==1) a[i] = 0;
                    else a[i] = 1;
                }
            }
            else if(a[i-1]==1) a[i] = 0;
            else a[i] = 1;
        }
    }
    for(int i=1;i<=n;i++)cout<< a[i] << " \n"[i==n];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}