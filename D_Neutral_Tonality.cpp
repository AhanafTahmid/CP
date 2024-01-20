#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> a2(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    vector<long long> a3;
    a3.insert(a3.end(),a.begin(),a.end());
    a3.insert(a3.end(),a2.begin(),a2.end());

    sort(a3.begin(),a3.end(),greater<int>());

    for(auto x: a3)cout<<x<<" ";
    cout<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}