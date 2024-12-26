#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vector<int>tmp;            
            for(int k=i;k<=j;k++){
                tmp.push_back(a[k]);
                ans = ans + (a[k]==0);        
            }
            ans = ans + tmp.size();
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}