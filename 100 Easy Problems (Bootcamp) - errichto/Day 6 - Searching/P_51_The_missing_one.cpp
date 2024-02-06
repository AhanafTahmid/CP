#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n-1;i++)cin>>ar[i];
    sort(ar,ar+n-1);
    for(int i=1;i<=n-1;i++){
        cout<< ar[i-1] <<" ";
    }
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}