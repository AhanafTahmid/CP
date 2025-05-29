#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, k;cin>> n >> m >> k;
    if( n*m == k){
        int v = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<< v++ <<' ';
            }
            cout<< endl;
        }
        return;
    }


    int curr = 1;

    vector<int>a(m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( i>=1 && a[j] == curr) {
                curr++;
                if(curr > k){
                    curr = 1;
                }
            }
            cout<< curr <<' ';
            a[j] = curr;
            curr++;
            if(curr > k){
                curr = 1;
            }
        }
        a.clear();
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}