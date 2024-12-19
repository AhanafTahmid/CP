#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n,-1), visited(n+1, 0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(visited[a[i]] == 0){
            b[i] = a[i];
            visited[a[i]] = 1;
        }
    }

    int val = 1;
    for(int i=0;i<n;i++){
        if(b[i] == -1){
            while(visited[val]){
                val++;
            }
            b[i] = val;
            visited[val] = 1;
        }
    }

    for(int i=0;i<n;i++){
        cout<< b[i] << " \n"[i==n-1];
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}