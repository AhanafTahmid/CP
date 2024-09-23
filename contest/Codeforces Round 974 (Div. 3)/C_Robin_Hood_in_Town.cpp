#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int s = 0;
    for(int &i: a)cin>>i, s+=i;
    sort(a.begin(),a.end());
    if(n==1 || n==2){
        cout<< -1 <<endl;
        return;
    }

    int l = -1, r = 1e18, m, u;
    while(l+1<r){
        m = (l+r)>>1;
        u = 0;
        double ss = s + m;
        double avg = ss/n;
        for(int x: a){
            if(x<avg/2)u++;
        }
        if( u > n/2 ) r= m;
        else l = m;
    }

    cout<< r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}