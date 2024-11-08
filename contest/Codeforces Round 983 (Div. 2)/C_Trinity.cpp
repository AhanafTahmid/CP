#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ct = 0;
    for(int i=0,j=n-1;i<n;){
        if(i+1<j && a[i]+a[i+1]<=a[j])ct++,i++;
        else if(i+1<j && a[i]+a[i+1]>a[j])j--;
        else break;
    }
    cout<< ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}