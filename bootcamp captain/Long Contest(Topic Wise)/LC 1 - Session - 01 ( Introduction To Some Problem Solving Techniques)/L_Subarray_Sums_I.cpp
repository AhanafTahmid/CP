//variable size sliding window

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void sliding_window(int ar[], int n, int x){
    int i = 0, j = 0, ans = 0, sum = 0;
    while(j<n){
        sum+=ar[j];
        if(sum==x)ans++,j++;
        else if(sum>x){
            while(sum>x){
                sum-=ar[i];
                i++;
            }
            if(sum==x)ans++;
            j++;
        }
        else if(sum<x)j++;

    }
    cout<< ans << endl;
}

void solve(){
    int n;cin>>n;
    int x;cin>>x;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    sliding_window(ar, n, x);
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}