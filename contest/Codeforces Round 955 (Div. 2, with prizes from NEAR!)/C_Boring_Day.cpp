#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, l, r;cin>>n>>l>>r;
    vector<int>a;
    int win = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=r)a.push_back(x);
    }

    n = a.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>=l && sum<=r){
            win++;
            sum = 0;
        }
        else if(sum>r){
            sum-=a[i-1];
            if(sum>=l && sum<=r){
                win++;
                sum = 0;
            }
            else sum = a[i];
        }
    }
    cout<< win <<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}