#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), b(n), p(n+1), ans(n), fr(n+1);

    for(int &i: a)cin>>i;
    for(int i=0;i<n;i++){
        cin>>b[i];
        p[i+1] = b[i] + p[i];
    }

    for(int i=0;i<n;i++){
        int  l = upper_bound(p.begin()+i,p.end(), p[i] + a[i]) - p.begin() - 1;
        if(i<l){
            fr[i]++;
            if(l<n) fr[l]--;//little confused
        }
    
        if(l<n){
            int leftovers = a[i] - (p[l] - p[i]);
            ans[l]+= leftovers;
        }
    }

    for(int i=1;i<n;i++){
        fr[i] = fr[i] + fr[i-1];
    }

    for(int i=0;i<n;i++){
        if(fr[i]>0) ans[i] += fr[i] * b[i];
    }

    for(int x: ans) cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}