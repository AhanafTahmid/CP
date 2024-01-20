#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve() {  

    int n, s;
    cin >> n >> s;
    vector<int> p(n+1);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      p[i+1] = p[i] + a;
    }
    if (p[n] < s) {
      cout << "-1\n";
      return;
      //continue;
    }
    int ans = -1;
    // int n, s; cin >> n >> s;
    // vector<ll> a(n), p(n);
    // for(int i=0;i<n;i++){
    //     cin >> a[i];
    //     p[i] = a[i];
    //     if(i) p[i] += p[i - 1];
    // }
    // int ans = -1;
    // // for(auto x: p)cout<<x<<" ";
    // // cout<<endl;

    // if(p[n-1]<s){
    //     cout<<-1<<endl;
    //     return;
    // }
    // else if(p[n-1]==s){
    //     cout<<0<<endl;
    //     return;
    // }
    for (int i = 0; i < n; i++) {
       int it = upper_bound(p.begin(), p.end(), p[i]+s)-p.begin();
       ans = max<int>(ans, it-i-1);
       //cout<<"it="<<it<<" i="<<i<<" it= "<<it-i-1<<" ans= "<<ans<<" "<<endl;
    }
    cout << n-ans << endl;

} 


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}