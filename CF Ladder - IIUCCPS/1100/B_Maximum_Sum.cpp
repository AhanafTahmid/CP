#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    vector<int>p(n+1,0);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    p[0] = 0;
    p[1] = a[0];
    for(int i=1;i<n;i++)p[i+1] = p[i] + a[i];
    int ans = 0;

    //k = 2
    //1. Choose last element 2 elements  -> 2 max
    //2. Choose first 2 elements, last 1 element -> 2 min, 1 max(2 operations)
    //3. Choose first 4 elements -> 4 mins(2 operations)
    //KEEP DOING THIS
    for(int i=0;i<=k;i++){
        ans = max(ans, p[n-(k-i)] - p[2*i]);
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