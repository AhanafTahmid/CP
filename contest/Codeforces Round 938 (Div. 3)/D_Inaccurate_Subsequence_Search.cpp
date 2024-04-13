#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    map<int, int> fr;
    map<int, int> fr2;
    vector<int> a(n), b(m);

    for(int &i: a)cin>>i;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        fr[x]++;
        b[i] = x;
    }

    int prev;//i-m;
    int ans = 0, ct = 0;

    //first window
    for(int i=0;i<m;i++){
        fr2[a[i]]++;
        if(fr[a[i]]>=fr2[a[i]])ct++;
    }
    if(ct>=k)ans++;

    //rest window
    for(int i=m;i<n;i++){
        prev = a[i-m];

        if(fr[prev]>=fr2[prev]) ct--;
        //delete out of range window
        fr2[prev]--;
        //add new element
        fr2[a[i]]++;
        if(fr[a[i]]>=fr2[a[i]]) ct++;
        
        if(ct>=k)ans++;
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