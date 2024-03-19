#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i:a)cin>>i;
    sort(a.begin(),a.end());

    if(a[0]!=1){
        cout<<"NO"<<endl;
        return;
    }

    int sum = a[0];
    for(int i=1;i<n;i++){
        if(sum<a[i]){
            cout<<"NO"<<endl;
            return;
        }
        sum+=a[i];
    }
    cout<<"YES"<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}