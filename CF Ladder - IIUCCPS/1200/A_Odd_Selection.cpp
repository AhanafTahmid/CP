#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x; cin>> n >> x;
    vector<int> a, b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x = x % 2;
        x ? a.push_back(x) : b.push_back(x);
    }
    int t1 = (a.size()%2 ? a.size() : a.size() - 1);
    t1 = (a.size()==0? 0: t1);
    int t2 = b.size();
    if(t1>=1 && t1+t2>=x && x%2==1)cout<<"Yes"<<endl;
    else if(t1>=1 && t2>=1 && t1+t2>=x && x%2==0)cout<<"Yes"<<endl;
    else cout<< "No" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}