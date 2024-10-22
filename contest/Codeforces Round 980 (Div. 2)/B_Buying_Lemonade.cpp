#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    a.push_back(0);
    sort(a.begin(),a.end());
    int s = 0, ct = 0;
    for(int i=1;i<=n;i++){
        int diff = a[i] - a[i-1];
        int el = n - i + 1;
        int pi = el * diff;
        if( (s + pi) >= k){
            ct += (k - s);
            break;
        }
        else{
            ct+= pi + 1;
            //s = ct - 1;
            s+=pi;
        }
    }
    cout<< ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}