#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), b;
    for(int &i: a)cin>>i;
    b = a;
    sort(a.begin(), a.end());

    bool ok = false;
    for(int i=0; i+1<n; i++){
        if(abs(b[i] - b[i+1]) <=1){
            cout<< 0 <<endl;
            return;
        }
    }

    for(int i=0; i+1<n; i++){
        if(abs(a[i] - a[i+1]) <=1){
            ok = true;
            break;  
        }
    }
    

    int ans = 1e10;
    for(int i=0;i<n;i++){
        if( i > 0 &&  i+1 < n && b[i-1]-1<= max(b[i], b[i+1]) && b[i-1]+1 >= min(b[i], b[i+1])){
            ans = min(ans, 1LL);
        }
        if( i+2 < n && b[i+2]-1<= max(b[i], b[i+1]) && b[i+2] + 1 >= min(b[i], b[i+1])){
            ans = min(ans, 1LL);
        }
    }

    cout << (ans==1e10?-1:ans) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}