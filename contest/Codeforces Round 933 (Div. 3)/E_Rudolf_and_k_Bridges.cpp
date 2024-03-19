#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m,k,d;cin>>n>>m>>k>>d;
    int a[10000];
    int ans = LLONG_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[j];
        }

        deque<int> dq; 
        deque<int> vvvv; 
        //first window, decreasing order
        for(int j=1;j<=d+1;j++){
            while(!dq.empty() && a[dq.back()]>a[j])dq.pop_back();
            //dq.push_back(j);
        }

        //main window
        for(int j=d+1;j<m;j++){
            vvvv.push_back(j);
            while(!dq.empty() && j-d+1>=dq.front() )dq.pop_front();
            while(!dq.empty() && a[dq.back()]>a[j])dq.pop_back();
            dq.push_back(j);
        }
        for(auto x: vvvv)cout<<x<<" ";
        cout<<endl;


    }
    




}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}