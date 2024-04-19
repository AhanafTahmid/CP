#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;

    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])>=2){
            cout<<"YES"<<endl;
            cout<< i + 1 << ' ' << i + 2 <<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}