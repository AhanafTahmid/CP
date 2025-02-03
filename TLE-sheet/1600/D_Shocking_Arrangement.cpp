#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), b;
    int s = 0, val = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+= a[i];
    }
    sort(a.rbegin(),a.rend());
    val = a.front() - a.back();

    if( s >= val ){
        cout<< "No" <<endl;
        return;
    }
    
    int l = 0, r = n - 1;
    s = 0;
    while(l<=r){
        if( s + a[l] < val){
            s+= a[l];
            b.push_back(a[l++]);
        }
        else{
            s+= a[r];
            b.push_back(a[r--]);
        }
    }

    cout<< "Yes" <<endl;
    for(int x: b)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}