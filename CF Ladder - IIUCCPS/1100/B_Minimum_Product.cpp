#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,x,y,n;cin>>a>>b>>x>>y>>n;
    int afirst = 0, bfirst = 0;
    //first case, choose a first
    int trim = min(a-x, n);
    int v1 = a - trim;
    //update trim
    trim = min(b-y, n-trim);
    int v2 = b - trim;
    //cout<< v1 <<" "<<v2 <<endl;


    //2nd case, choose b first
    int trim2 = min(b-y, n);
    int v3 = b - trim2;
    //update trim2
    trim2 = min(a-x, n-trim2);
    int v4 = a - trim2;
    //cout<< v3 <<" "<<v4 <<endl;

    cout<< min(v1*v2, v3*v4) <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}