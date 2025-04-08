#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    deque<int>a(n);
    vector< array<int, 2> >ans;
    int z = 0;
    for(int &i: a){
        cin>>i;
        if( i==0 ) z++;
    }
    if( z == n){
        ans.push_back({n-1, n});
        ans.push_back({1, n-2});
    }
    else if( z == 0){
        ans.push_back({1, n});
    }
    else{
        for(int i=0;i<a.size();i++){
            if( a[i] != 0) continue;
            int j = i;
            while( j<a.size() && a[j] == 0 && j - i <= 1)j++;
            if( j - i > 1 ){
                ans.push_back({i+1, j});
                a[i] = -1;
            }
        }
        vector<int>b;
        for(int i=0;i<a.size();i++){
            if( a[i] == -1) continue;
            b.push_back(a[i]);
        }
        for(int i=b.size()-1;i>=0;i--){
            if( i-1>=0 && b[i] == 0 && b[i-1]!=0){
                b[i] = 
            }
            else if( i-1>=0 && b[i] != 0 && b[i-1]==0){

            }
        }
    }
    bool f = 0;
    for(int i=0;i<a.size();i++){
        while(a[i]!=0 && i<a.size())i++;

        set<int>st;
        st.insert(a[i]);
        if( )
        for(int j=i+1;j<a.size();j++){
            if( a[i])
        }
        int mx = -1, last = 0;
        for(int i=0;i<=n;i++){
            if( st.count(i) == 0){
                mx = i;
                break;
            }
        }
        if( mx == 0){
            ans.push_back({1, a.size()});
            break;
        }
        else{
            ans.push_back({1, a.size()});
            for(int i=0;i+1<a.size();i++){
                a[i] = mx;
            }
            a.pop_back();
        }
    }

    cout<< ans.size() <<endl;
    for(auto x: ans) cout<< x[0] << " " << x[1] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}
