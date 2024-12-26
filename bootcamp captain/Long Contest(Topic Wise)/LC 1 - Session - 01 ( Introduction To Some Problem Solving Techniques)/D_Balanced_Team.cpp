//keep checking the team members for every i in the loop

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void two_pointer(int ar[], int n){
    sort(ar,ar+n);
    int l = 0, r = 0, ans = 0;
    while(l<n){
        while(r<n && ar[r]-ar[l]<=5) r++;
        ans = max(ans, r-l);
        //cout<< r - l <<endl;
        l++;
    } 
    cout<< ans <<endl;

}

void solve(){
    int n;cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    two_pointer(ar, n);
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}