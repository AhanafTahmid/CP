#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin >> n >> k;
    vector<int> pos;
    deque<int> neg;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x > 0 ? pos.push_back(x): neg.push_back(x);
    }

    sort(neg.begin(),neg.end());
    int ng = neg.size();
    n = min(ng, k);

    while(n--){
        neg.front() = -neg.front();
        pos.push_back(neg.front());
        neg.pop_front();
        k--;
    }   

    if(!k) cout<< accumulate(pos.begin(),pos.end(),0LL) + accumulate(neg.begin(),neg.end(),0LL) <<endl;
    else{
        sort(pos.begin(),pos.end());
        while(k--) pos[0] = -pos[0];
        cout<< accumulate(pos.begin(),pos.end(),0LL) + accumulate(neg.begin(),neg.end(),0LL) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}