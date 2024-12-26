//lowerbound question
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int n; 
pair<int,int> lw(int ar[], int x){
    int l = 0, r = n-1, m;
    while(l+1<r){
        m = (l+r)>>1;
        if(ar[m]<=x) l = m;
        else r = m;
    }
    return {l,r};
}

void solve(){
    cin>> n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    int q;cin>>q;
    while(q--){
        int x;cin>>x;

        int l = lw(ar,x).first;
        int r = lw(ar,x).second;
        if(ar[l]==x)cout<< l <<endl;
        else if(ar[r]==x)cout<< r <<endl;
        else cout<< -1 <<endl;
    }
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}


//Using built-in lower bound function

// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long

// void solve(){
//     int n; cin>> n;
//     int ar[n+1];
//     for(int i=0;i<n;i++)cin>>ar[i];
//     int q;cin>>q;
//     while(q--){
//         int x;cin>>x;
//         int idx = lower_bound(ar,ar+n,x) - ar;
//         if(ar[idx]==x)cout<< idx <<endl;
//         else cout<< -1 <<endl;
//     }
// }


// int main(){
//     int t=1;
//     //cin >> t;
//     while(t--)solve(); 
//     return 0;
// }