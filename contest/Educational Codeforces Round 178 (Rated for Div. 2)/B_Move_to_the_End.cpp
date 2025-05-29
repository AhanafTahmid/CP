#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<int>mx(n+1),s(n+1);
    for(int i=1; i<=n; i++){
        s[i] = s[i-1] + a[n-i];
        mx[i] = max(mx[i-1], a[i-1]);
    }

    cout<< *max_element(a.begin(),a.end()) << " ";
    for(int i=2;i<=n;i++){
        //int v1 = max(s[i+1],s[i]+mx[n - i - 1]);
        int v2 = max(s[i], s[i-1] + mx[n-i]);
        cout << v2 << ' ';
    }
    cout<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}