#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=1;j<=4;j++){
            char ch;cin>>ch;
            if(ch=='#') ans.push_back(j);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int x: ans)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}