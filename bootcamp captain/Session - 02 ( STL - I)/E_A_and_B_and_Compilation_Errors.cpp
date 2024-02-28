#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    map<int, int> tmp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    tmp = mp;
    for(int i=0;i<n-1;i++){
        int x;cin>>x;
        tmp[x]--;
        if(tmp[x]==0)tmp.erase(x);
    }
    cout<< tmp.begin()->first <<endl;
    int v = tmp.begin()->first;
    tmp = mp;
    tmp[v]--;
    if(tmp[v]==0)tmp.erase(v);
    for(int i=0;i<n-2;i++){
        int x;cin>>x;
        tmp[x]--;
        if(tmp[x]==0)tmp.erase(x);
    }
    cout<< tmp.begin()->first <<endl;

}

// void solve(){
//     int n;cin>>n;
//     int sum = 0, ans1 = 0, ans2 = 0;
//     for(int i=0;i<n;i++){
//         int x; cin>>x;
//         sum+=x;
//     }
//     ans1 = sum;
//     ans2 = sum;
//     for(int i=0;i<n-1;i++){
//         int x;cin>>x;
//         ans1-=x;
//     }
//     cout<< ans1 <<endl;
//     ans2-=ans1;
//     for(int i=0;i<n-2;i++){
//         int x;cin>>x;
//         ans2-=x;
//     }
//     cout<< ans2 <<endl;
// }


int32_t main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}