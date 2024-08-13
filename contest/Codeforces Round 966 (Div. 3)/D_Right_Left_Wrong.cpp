#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>p(n),a,b;
    //set<int>a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        (i? p[i] = p[i-1] + x : p[0] = x);
    }
    int s1 = 0, s2 = 0;
    for(int i=1;i<=n;i++){
        char ch;cin>>ch;
        if(ch=='L') a.push_back(i-1), s1+=i;
        else b.push_back(i-1), s2+=i;
    }
    int n1 = a.size(), n2 = b.size(), ans = 0;
    bool ok = 0;
    int ct = 10;
    while(ct--){
        ok = 1;
        int v1 = s1/n1;
        int v2 = s2/n2;
        int l = lower_bound(a.begin(),a.end(),v1) - a.begin();
        l--;
        if(l<=-1) ok = 0;
        else s1-=a[l], n1--;
        int r = lower_bound(b.begin(),b.end(),v1) - b.begin();
        if(r==n2) ok = 0;
        else s2-=b[r], n2--;

        ans += (p[r-1] - p[l-1]);

        if(!ok)break;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}