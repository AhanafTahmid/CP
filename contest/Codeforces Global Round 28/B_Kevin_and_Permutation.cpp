#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    int l = 1, r = n, ok = 1;
    vector<int>a;
    while(1){
        int kk = k - 1;
        ok = 0;
        while(kk--){
            a.push_back(r--);
            if(a.size()==n){
                ok = 1;
                break;
            }
        }
        if(ok)break;
        a.push_back(l++);
        if(a.size()==n)break;
    } 

    for(int x: a)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}