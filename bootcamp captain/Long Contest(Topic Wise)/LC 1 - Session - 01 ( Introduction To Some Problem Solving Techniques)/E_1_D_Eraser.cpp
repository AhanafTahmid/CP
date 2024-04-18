#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void sliding_window(string s, int n, int k){
    queue<int> q;
    int ans = 0;
    //for the initial part of the window
    for(int i=0;i<k;i++){
        if(s[i]=='B') q.push(i);
    }
    //if(!q.empty())ans++;

    //for the rest part of the window
    for(int i=k;i<n;i++){
        if(!q.empty()) ans++;
        cout<< q.front()<<endl;
        //remove out of the window
        while(!q.empty() && q.front()<i-k+1)q.pop();
        if(s[i]=='B') q.push(i);
    }  

    cout<< ans <<endl;


}

void solve(){
    int n;cin>>n;
    int k;cin>>k;
    string s; cin>>s;
    sliding_window(s, n, k);
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}