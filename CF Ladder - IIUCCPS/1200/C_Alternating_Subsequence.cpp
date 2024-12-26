#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a) cin>>i;
    int mx = LLONG_MIN;
    vector<int> ans;
    //get positive values
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(mx!=LLONG_MIN)ans.push_back(mx);
            mx = LLONG_MIN;
        }
        else mx = max(mx, a[i]);
    }
    if(mx!=LLONG_MIN)ans.push_back(mx);
    
    //get negative values
    mx = LLONG_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            if(mx!=LLONG_MIN)ans.push_back(mx);
            mx = LLONG_MIN;
        }
        else mx = max(mx , a[i]);
        
    }
    if(mx!=LLONG_MIN)ans.push_back(mx);

    cout<< accumulate(ans.begin(),ans.end(),0LL) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}