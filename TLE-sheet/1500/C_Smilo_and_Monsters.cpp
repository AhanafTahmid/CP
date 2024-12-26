#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int sum = accumulate(a.begin(),a.end(), 0LL);
    int ans = sum - sum/2;
    sum/=2;
    for(int i=n-1;i>=0;i--){
        if(sum<=0){
            break;
        }
        else{
            sum-=a[i];
            ans++;
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