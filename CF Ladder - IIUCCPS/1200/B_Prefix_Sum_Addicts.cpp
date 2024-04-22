#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(k);
    for(int &i: a)cin>>i;

    vector<int> b;
    b.push_back(a.front());
    for(int i=0;i<k-1;i++){
        b.push_back(a[i+1]-a[i]);
    }
    for(auto x : b)cout<< x << ' ';
    if(is_sorted(b.begin(),b.end()) ) cout<< "Yes" <<endl;
    else cout<< "No"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}