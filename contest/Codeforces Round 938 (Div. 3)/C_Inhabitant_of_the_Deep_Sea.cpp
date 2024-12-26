#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n), p(n), s(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        i ? p[i] = p[i-1] + x : p[i] = x;
        a[i] = x;
    }

    for(int i=n-1;i>=0;i--){
        i==n-1?s[i] = a[n-1] : s[i] = s[i+1] + a[i];
    }
    reverse(s.begin(),s.end());

    int left = k/2 + k%2;
    int right = k/2;

    int lft = lower_bound(p.begin(),p.end(),left) - p.begin();
    int rgt = lower_bound(s.begin(),s.end(),right) - s.begin();

    (p[lft]==left) ? lft++:0;
    (s[rgt]==right) ? rgt++:0;

    if(p.back()<=k)cout<< n <<endl;
    else cout<< lft + rgt <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}