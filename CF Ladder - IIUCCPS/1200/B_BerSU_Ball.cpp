#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;

    int m;cin>>m;
    vector<int> b(m);
    for(int &i: b)cin>>i;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans = 0;
    for(int i=0, j = 0;i<n && j<m;){
        if(abs(a[i]-b[j])<=1) i++,j++,ans++;
        else{
            (a[i]>b[j])?j++:i++;
        }
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