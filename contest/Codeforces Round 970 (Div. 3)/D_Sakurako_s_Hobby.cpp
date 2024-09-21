#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n+1),b(n+1),visited(n+1), ans(n+1);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[i] = x;
    }
    for(int i=1;i<=n;i++){
        int x;scanf("%1lld", &x);
        b[i] = x;
    }
    for(int i=1;i<=n;i++){
        vector<int>tmp;
        int k = i, ct = 0;
        while(!visited[k]){
            tmp.push_back(k);
            visited[k] = 1;   
            if(b[k]==0) ct++;
            k = a[k];         
        }
        for(int x: tmp) ans[x] = ct;
    }
    for(int i=1;i<=n;i++)cout<< ans[i] << " \n"[i==n];
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}