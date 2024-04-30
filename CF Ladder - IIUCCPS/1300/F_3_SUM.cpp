#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x%10;
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    //3, 13, 23
    int target = 23;
    int l = 0, r = n-1, sum = 0;
    while(l<r){
        if(sum<target)sum+=a[l],l++;
        else if(sum>target) sum
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}