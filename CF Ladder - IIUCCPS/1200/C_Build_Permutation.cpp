#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool issq(int x){
    int sq = sqrt(x);
    return sq*sq == x;
}

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    set<int> st;
    for(int i=0;i<n;i++)mp[i] = 1;

    vector<int> a;
    for(int i = n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(issq(j+i) && !st.count(j) && mp[i]){
                a.push_back(j);
                mp[i] = 0; 
                st.insert(j);
                break;
            }
        }
    }

    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++)cout<< a[i] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}