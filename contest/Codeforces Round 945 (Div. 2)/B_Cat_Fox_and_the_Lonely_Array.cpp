#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),p(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        i?p[i]=p[i-1] | a[i] : p[i] = a[i];
    }
    int ind = lower_bound(p.begin(),p.end(),p.back()) - p.begin();
    int ans = n;
    bool ok = false;
    while(1){
        ok = false;
        int v = p[ind];
        for(int i=ind;i<n;i+=ind){
            int v1 = p[i] & ~p[min(n-1, i+i)];
            if(v1!=v) ok = true;
        }
        if(ok){
            ans = ind+1;
            break;
        }
        else ind++;
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