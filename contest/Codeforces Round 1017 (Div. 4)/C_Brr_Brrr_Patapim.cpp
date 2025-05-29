#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    vector<array<int,2>>a(2*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            a[i+j]={i+j, mat[i][j]};
        }
    }
    sort(a.begin(),a.end());

    set<int>st, st2;

    for(int i=0;i<2*n;i++)st.insert(a[i][1]);

    for(int i=1;i<=2*n;i++){
        if(!st.count(i))st2.insert(i);
    }

    for(int i=0;i<2*n;i++){
        if( a[i][1] == 0){
            a[i][1] = *st2.begin();
            st2.erase(st2.begin());
        }
    }

    for(int i=0;i<2*n;i++){
        cout<< a[i][1] << " \n"[i+1==2*n];
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}