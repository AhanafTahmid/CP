#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n+1), visited(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(a[i]==i){
            visited[a[i]] = 1;
            continue;
        }
        else if(a[a[i]] == i){
            visited[i] = 1;
            visited[a[i]] = 1;
            continue;
        }

        
        int ct = 1, k = i;
        visited[k] = 1;
        while(!visited[a[k]]){
            ct++;
            k = a[k];
            visited[k] = 1;
        }
        
        if(ct>2) ans+= (ct-1)/2;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}