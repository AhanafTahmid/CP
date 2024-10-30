#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n; cin>>n;
    vector<string> s1,s2,s3;
    map<string, int>mp;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        s1.push_back(s);
        mp[s]++;
    }
    for(int i=0;i<n;i++){
        string s;cin>>s;
        s2.push_back(s);
        mp[s]++;
    }
    for(int i=0;i<n;i++){
        string s;cin>>s;
        s3.push_back(s);
        mp[s]++;
    }

    int p1 = 0, p2 = 0, p3 = 0;
    for(int i=0;i<n;i++){
        if(mp[s1[i]]==2)p1 = p1 + 1;
        else if(mp[s1[i]]==1)p1 = p1 + 3;
    }
    for(int i=0;i<n;i++){
        if(mp[s2[i]]==2)p2 = p2 + 1;
        else if(mp[s2[i]]==1)p2 = p2 + 3;
    }
    for(int i=0;i<n;i++){
        if(mp[s3[i]]==2)p3 = p3 + 1;
        else if(mp[s3[i]]==1)p3 = p3 + 3;
    }

    printf("%lld %lld %lld\n",p1,p2,p3);
}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}