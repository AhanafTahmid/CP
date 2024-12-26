#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    priority_queue<int> q;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0){
            if(!q.empty()){
                ans+=q.top();
                q.pop();
            }
        }
        else q.push(x);
    }

    cout<<ans<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}