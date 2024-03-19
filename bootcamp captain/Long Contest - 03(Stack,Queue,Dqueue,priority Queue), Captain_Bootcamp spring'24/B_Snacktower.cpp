#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    priority_queue<int> q;
    priority_queue<int> tmp;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
        q.push(x);
    }
    int f = 0;
    for(int i=0,j = 1;i<n;i++){
        tmp.push(a[i]);
        while(tmp.top()==q.top() && !tmp.empty()){
            cout<<q.top()<<" ";
            q.pop();
            tmp.pop();
        }
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