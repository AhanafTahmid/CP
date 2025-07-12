#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    if( is_sorted(a.begin(), a.end()) ){
        cout << "NO" << endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                cout << "YES" << endl;
                cout<< 2 <<endl;
                cout << a[i] << " " << a[j] << endl;
                return;
            }
        }
    }
    cout<< "NO" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}