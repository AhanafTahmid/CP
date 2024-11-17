#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    if(n==1){
        cout<< "YES" <<endl;
        return;
    }
    else {
        for(int i=0;i<n;){
            if(a[i]==i+1) i++;
            else if(i+1<n && a[i]!=i+1 && abs(a[i]-a[i+1])==1) swap(a[i], a[i+1]), i+=2;
            else{
                cout<< "NO" <<endl;
                return;
            }
        }
    }

    if(is_sorted(a.begin(),a.end())) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}