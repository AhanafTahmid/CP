#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int ans = accumulate(a.begin(),a.end(),0LL), s = ans;
    while(a.size()!=1){
        vector<int>b;
        for(int i=0;i+1<a.size();i++){
            b.push_back(a[i+1] - a[i]);
        }
        s = accumulate(b.begin(),b.end(),0LL);
        ans = max(ans, s);
        if(s<=0) for(int i=0;i<b.size();i++)b[i] = -1 * b[i];
        s = 0;
        s = accumulate(b.begin(),b.end(),0LL);
        ans = max(ans, s);
        reverse(b.begin(),b.end());
        a = b;
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