#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    string s;cin>>s;
    vector<string>li, li2;
    int last = -1;
    for(int i=0;i<n;i++){
        li.push_back(s.substr(0, i+1));
    }

    for(int i=0;i<n;i++){
        string s2 = "", s3="";
        while(s2.size()<=k)s2+= li[i];
        for(int j=0;j<k;j++){
            s3+= s2[j];
        }
        li2.push_back(s3);
    }
    sort(li2.begin(), li2.end());
    cout<< li2[0] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}