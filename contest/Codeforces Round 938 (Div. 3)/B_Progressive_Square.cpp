#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,c,d;cin>>n>>c>>d;
    vector<int>v1;
    for(int i=1;i<=n*n;i++){
        int x;cin>>x;
        v1.push_back(x);
    }
    vector<int>v2;
    int mn = *min_element(v1.begin(),v1.end());
    v2.push_back(mn);
    int v = mn;
    int tmp = mn;
    for(int i=2;i<=n*n;i++){
        if(i%n==1) v+=c, tmp = v, v2.push_back(v);
        else tmp+=d, v2.push_back(tmp);
    }
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n*n;i++){
        if(v1[i]!=v2[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}