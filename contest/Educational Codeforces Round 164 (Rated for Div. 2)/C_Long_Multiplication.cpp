#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string x,y;cin>>x>>y;
    int n = x.size();
    int sw = n - 1, f = 0;
    for(int i=0;i<n;i++){
        if(x[i] > y[i]){
            sw = i + 1;
            f = 1;
            break;
        }
        else if(x[i] < y[i]){
            sw = i + 1;
            break;
        }
    }

    if(!f){for(int i=sw;i<n;i++) if(x[i] < y[i]) swap(x[i],y[i]);cout<< x << endl<< y <<endl; return;}
    for(int i=sw;i<n;i++) if(x[i] > y[i]) swap(x[i],y[i]);
    cout<< x << endl<< y <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}