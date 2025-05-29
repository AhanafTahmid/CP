#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    string s;cin>>s;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int mx = 0, mxc = 0;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        if( s[i] == '1'){
            mxc = max(a[i], mxc + a[i]);
            mx = max(mx, mxc);
        }
        else mxc = 0;
    }
    int ct = count(s.begin(),s.end(), '0');
    if( ct == 0){
        if( mx == k ) {
            cout<< "Yes" <<endl;
            for(int x: a)cout<< x << ' ';
            cout<<endl;
        }
        cout<< "No" <<endl;
        return;
    }
    if( mx>k){
        cout<< "NO" <<endl;
    }

    int ind = 0;
    for(int i=0;i<n;i++){
        if( s[i] == '0') ind = i;
    }
    int vv1 = 0, vv2 = 0,v1 = 0, v2 = 0;
    for(int i=ind+1;i<n;i++){
        if( s[i] == '1') vv1+= a[i], v1 = max(v1, vv1);
        else break;
    }

    for(int i=ind-1;i>=0;i--){
        if( s[i] == '1') vv2+= a[i], v2 = max(v2, vv2);
        else break;
    }


    a[ind] = k - v1 - v2;

    cout<< "Yes" <<endl;
    int nn = -1e18;
    for(int i=0;i<n;i++){
        if( s[i] == '0') cout<< nn <<' ';
        else cout<< a[i] << ' ';
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