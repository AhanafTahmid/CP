#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int f = 0, l = 1;
    int dis = LLONG_MAX;
    for(int i=1;i<n;i++){
        if(dis>(a[i]-a[i-1])){
            f = i-1;
            l = i;
            dis = (a[i]-a[i-1]);
        }
    }

    if(n==2){
        cout<< a[0] << ' ' << a[1]<<endl;
        return;
    }
    cout<< a[l] <<' ';
    for(int i=l+1;i<n;i++)cout<< a[i] <<' ';
    for(int i=0;i<f;i++)cout<< a[i] <<' ';
    cout<< a[f] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}