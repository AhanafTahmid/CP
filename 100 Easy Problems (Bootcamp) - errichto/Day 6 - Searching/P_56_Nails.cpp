//upperbound question

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

//My Way
int n;
int up(int ar[],int x){
    int l = -1, r = n,m;
    while(l+1<r){
        m = (l+r)>>1;
        if(ar[m]<=x)l=m;
        else r = m;
    }
    if(ar[r]==x) return r+1;
    else return r;
}


void solve(){
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        int idx = up(ar,x);
        //cout<< idx <<endl;
        if(idx<=n-1)cout<<ar[idx]<<endl;
    }
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}







//Using built-in upper bound function
// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long


// void solve(){
//     int n;
//     cin>>n;
//     int ar[n+1];
//     for(int i=0;i<n;i++)cin>>ar[i];
//     int q; cin>>q;
//     while(q--){
//         int x; cin>>x;
//         int idx = upper_bound(ar,ar+n,x) - ar;
//         if(idx<=n-1)cout<< ar[idx] <<endl;
//     }
// }


// int main(){
//     int t=1;
//     //cin >> t;
//     while(t--)solve(); 
//     return 0;
// }