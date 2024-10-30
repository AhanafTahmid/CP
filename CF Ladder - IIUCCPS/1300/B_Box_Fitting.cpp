#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, w;cin>>n>>w;
    multiset<int>ms;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ms.insert(x);
    }
    int ans = 1, available = w;
    while(!ms.empty()){
        auto it = ms.upper_bound(available);
        if(it!=ms.begin()){
            int v = *--it;//already delete hoi gese 
            available-=v;
            ms.erase(it);//erasing timecomplexity is O(1) cause deleting by iterator
        }
        else{
            ans++;
            available = w;
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