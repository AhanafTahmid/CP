#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int gc = a.front();
    for(int x: a)gc = __gcd(x, gc);

    vector<int> dv;
    for(int i=1;i*i<=gc;i++){
        if(gc%i==0){
            dv.push_back(i);
            if(gc/i != i) dv.push_back(gc/i);
        }
    }

    cout<< dv.size() <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}