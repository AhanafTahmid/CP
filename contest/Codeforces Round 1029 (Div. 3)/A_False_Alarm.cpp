#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>> n >> x;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    int ct = count(a.begin(), a.end(), 1);
    if( ct == 0 ){
        cout << "YES" << endl;
        return;
    }
    
    bool f = 0;
    for(int i=0;i<n;){
        if( a[i] == 1 && x != 0) i+=x, x = 0;
        else if( a[i] == 1) {
            cout << "NO" << endl;
            return;
        }
        else i++;
    }
    cout<< "YES" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}