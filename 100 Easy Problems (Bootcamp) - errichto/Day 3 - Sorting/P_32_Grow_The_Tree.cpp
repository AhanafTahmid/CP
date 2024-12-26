#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int m = n/2;
    ll s1 = 0;
    for(int i=0;i<m;i++){
        s1+=ar[i];
    }
    ll s2 = 0;
    for(int i=m;i<n;i++){
        s2+=ar[i];
    }
    cout<< (s1*s1+s2*s2) <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}