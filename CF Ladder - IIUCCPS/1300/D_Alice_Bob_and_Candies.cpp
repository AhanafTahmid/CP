#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int l = 0, r = n-1, alice = 0, bob = 0,p1 = 0, p2 = 0, ct = 0;
    while(l<=r){
        while(p1<=p2 && l<=r){
            if(!p1)ct++;
            alice+=a[l];
            p1+=a[l];
            l++;
        }
        p2 = 0;
        while(p1>=p2 && l<=r){
            if(!p2)ct++;
            bob+=a[r];
            p2+=a[r];
            r--;
        }
        p1 = 0;
    }
    cout<< ct << ' ' << alice << ' ' << bob <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}