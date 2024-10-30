#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, c, d;cin>>n>>c>>d;
    deque<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ans = 0;
    if(a.front()!=1) a.push_front(1), ans = d;
    int diff, rem;
    n = a.size();

    for(int i=1;i<n;i++){
        diff = (a[i] - a[i-1] - 1) * d;
        rem = (n - i) * c;
        
        if(diff>=rem || (diff<0 && rem<=d)){
            ans+=rem;
            break;
        }
        else{
            ans+=diff;
        }

        cout<< a[i] << '-' << i << ' ' << diff << ' ' << rem << ' ' << ans <<endl;
        
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}