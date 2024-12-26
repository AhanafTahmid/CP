#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// void solve(){
//     int n;cin>>n;
//     int ans = 0;
//     priority_queue<int> pq;
//     for(int i=0;i<n;i++){
//         int x;cin>>x;
//         if(x==0){
//             if(!pq.empty()){
//                 ans+=pq.top();
//                 pq.pop();
//             }
//         }
//         else pq.push(x);
//     }
//     cout<< ans <<endl;
// }


void solve(){
    int n;cin>>n;
    multiset<int>ms;
    ms.insert(77);
    int ans = 0, mx;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0 && !ms.empty()) ans+=*ms.rbegin(), ms.erase(prev(ms.end()));
        ms.insert(x);
        cout<<*(next(ms.begin()))<<endl;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}