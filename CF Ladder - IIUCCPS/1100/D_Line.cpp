#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int pot = 0;
    vector<int> vc;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        char ch;cin>>ch;
        if(ch=='L')pot+=(i),vc.push_back((n-1-i)-i);
        else if(ch=='R')pot+=(n-1-i),vc.push_back(i - (n-1-i));
    }
    sort(vc.rbegin(),vc.rend());
    for(int i=0;i<n;i++){
        if(vc[i]>0)pot+=vc[i];
        cout<<pot<<" ";
    }
    cout<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}