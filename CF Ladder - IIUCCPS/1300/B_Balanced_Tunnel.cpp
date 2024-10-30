#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    queue<int> q1, q2;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        q1.push(x);
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        q2.push(x);
    }
    set<int> st;
    int ans = 0;
    while(!q1.empty()){
        int x = q1.front();
        int y = q2.front();
        if(st.count(x)){
            q1.pop();
        }
        else if(x!=y){
            st.insert(y);
            q2.pop();
            ans++;
        }
        else{
            q1.pop();
            q2.pop();
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}