#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    vector< pair<int, int> > vp;
    int mnIndx;
    for(int i=0;i<n;i++){
        mnIndx = i;
        for(int j=i;j<n;j++){
            if(a[mnIndx]>a[j]){
                mnIndx = j;
            }
            else if(a[mnIndx]==a[j]){
                if(b[mnIndx]>b[j]){
                    mnIndx = j;
                }
            }
        }
        swap(a[mnIndx], a[i]);
        swap(b[mnIndx], b[i]);
        if(mnIndx!=i)vp.push_back({mnIndx+1, i+1});
    }
    if(!is_sorted(a.begin(),a.end()) || !is_sorted(b.begin(),b.end())) cout<< -1 <<endl;
    else{
        cout << vp.size() <<endl;
        for(auto [x,y]:vp)cout<< x << ' ' << y <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}