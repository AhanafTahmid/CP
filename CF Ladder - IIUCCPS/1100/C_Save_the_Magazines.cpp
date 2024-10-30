#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans = 0;
    priority_queue<int>pq;
    priority_queue<int>tmp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(s[i]=='0')pq.push(x);
        else{
            if(!pq.empty() && pq.top()>=x){
                ans+=pq.top();
                pq = tmp;
                pq.push(x);
            }
            else{
                ans+=x;
            }
        }   
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