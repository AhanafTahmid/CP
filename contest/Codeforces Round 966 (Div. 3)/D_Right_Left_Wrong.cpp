#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>p(n+1),a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        p[i+1] = p[i] + x;
    }
    for(int i=0;i<n;i++){
        char ch;cin>>ch;
        if(ch=='L') a.push_back(i);
        else b.push_back(i);
    }
    int ans = 0;
    int n1 = a.size(), n2 = b.size();
    reverse(b.begin(),b.end());
    int nn = min(n1,n2);
    for(int i=0;i<nn;i++){
        if(b[i]>a[i]) ans+= (p[b[i]+1] - p[a[i]]);
    }
    if(ans<=0) cout<< 0 <<endl;
    else cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}