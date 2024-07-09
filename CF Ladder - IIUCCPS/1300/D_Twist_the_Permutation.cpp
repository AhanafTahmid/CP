#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n), ans;
    for(int &i: a)cin>>i;
    iota(b.begin(),b.end(),1);

    for(int i=n;i>=1;i--){
        int j=0;
        for(j=0;j<i;j++){
            if(a[j]==i){
                break;
            }
        }
        if(j+1 != i){
            ans.push_back(j+1);
            rotate(a.begin(), a.begin()+j+1, a.begin()+i);
        }
        else ans.push_back(0);
        
        // cout<< i << endl;
        // for(int k=0;k<n;k++) cout<< a[k] << " \n"[k==n-1];
    }
    if(a!=b){
        cout<< -1 <<endl;
        return;
    }

    reverse(ans.begin(),ans.end());
    for(int k=0;k<n;k++) cout<< ans[k] << " \n"[k==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}