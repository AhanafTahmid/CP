#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n+1);
    vector<int> found_indx(n+1,0);
    vector<int> fr(n+1,0);
    set<int> st;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[i] = x;
        st.insert(x);
        if(!found_indx[x]) found_indx[x] = i, (i!=1)?fr[x]++:0;
        else{
            (i - found_indx[x])>1?fr[x]++: 0;
            found_indx[x] = i;
        }
    }

    int ans = fr[a.back()];
    if(st.count(a[0])==1)fr[a[0]]++;
    for(int x: st){
        if(a.back()!=x){
            fr[x]++;
            ans = min(ans, fr[x]);
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}