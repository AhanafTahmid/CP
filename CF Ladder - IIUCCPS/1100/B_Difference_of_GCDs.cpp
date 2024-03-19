#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, l, r;cin>>n>>l>>r;
    int tmp;
    vector<int> ans;
    for (int i = 1; i <= n; i++){
        tmp = ((l+i-1)/i) * i;
        if(tmp>r){
            cout<<"NO"<<endl;
            return;
        }
        ans.push_back(tmp);
    }
    cout << "YES" << endl;
    for (auto x : ans)
        cout << x << ' ';
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}