#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x;
    }
    sort(a.begin(),a.end());
    int l = 0, r = 1;
    while(l<n && r<n){
        if(a[r]-a[l]<k)r++;
        else if(a[r]-a[l]>k)l++;
        else if(a[r]-a[l]==k){
            cout<<"YES"<<endl;
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