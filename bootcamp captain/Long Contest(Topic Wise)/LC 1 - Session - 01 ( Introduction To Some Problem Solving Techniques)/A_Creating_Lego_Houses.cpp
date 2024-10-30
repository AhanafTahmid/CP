#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void two_pointer(int ar[], int n){
    int l = 0, r = n-1, ans = 0;
    int s1 = ar[l] , s2 = ar[r];
    while(l<r){
        if(s1==s2) ans=(l+1+(n-r)), l++,r--,s1+=ar[l],s2+=ar[r];
        else if(s1<s2)l++,s1+=ar[l];
        else if(s1>s2)r--,s2+=ar[r];
    }
    cout<< ans <<endl;

}

void solve(){
    int n;cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    if(n==1)cout<<0<<endl;
    else two_pointer(ar, n);
}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}