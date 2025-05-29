#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n), b(m);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;

    vector<int>p(m), s(m);
    int i = 0, j = 0, v = 0;
    while(j<m && i<n){
        if(b[j]<=a[i])p[j] = i, j++,i++,cout<< i <<endl;
        else i++;
    }
    if( j == m){
        cout<< 0 <<endl;
        return;
    }
    
    i = n-1, j = m-1, v = 0;
    while(j>=0 && i>=0){
        if(b[j]<=a[i])s[j] = i, j--,i--;
        else i--;
    }
    
    //j=0;
    int ans = 1e10;
    s[m] = n;
    bool f = 0;

    for(i=0;i<m;i++)
        cout<< p[i] << " " << s[i] <<endl;

    for(int k=0;k<m;k++){
        if( p[k] < s[k] && !f){
            //cout<< p[k] << s[k+1] <<endl;
            ans = min(ans, b[k]);
            f = 1;
        }
        else if(  p[k] < s[k] && f){
            cout<< -1 <<endl;
            return;
        }
    }
    cout<< ans <<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}


