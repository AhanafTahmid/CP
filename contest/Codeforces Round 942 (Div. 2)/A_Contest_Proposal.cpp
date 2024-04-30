#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;

    int ans = 0;
    while(1){
        int l = 0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                a.insert(a.begin()+l, b[i]);
                a.pop_back();
                ans++;
                break;
            }
            l++;
        }
        if(l == n)break;
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