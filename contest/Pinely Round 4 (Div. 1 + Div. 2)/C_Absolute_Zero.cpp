#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int>st;
    vector<int>a(n), b;
    int s = 0;
    for(int &i: a)cin>>i, s+=i, st.insert(i);
    if( s == 0){
        cout<< 0 <<endl<<endl;
        return;
    }

    int g = a.front();
    int ng = 0;
    for(int i=1;i<n;i++) g = __gcd(g, a[i]);
    ng = g;

    if(st.size()==2 && *st.begin() == 0){
        int a = (*++st.begin());
        if(a%2==0){
            cout<< 2 <<endl;
            cout<< a/2 << ' ' << a/2 <<endl;
            return;
        }
    }

    bool ok = 1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) ok = 0;
    }
    if(ok){
        cout<< 1 <<endl;
        cout<< a.front() <<endl;
        return;
    }

    for(int i=1;i<=40;i++){
        st.clear();
        ng = g;
        b.push_back(ng);
        for(int j=0;j<n;j++){
            a[j] = abs( a[j] - g );
            ng = __gcd(ng, a[j]);
            st.insert(a[j]);
        }
        int a = (*++st.begin());
        if(st.size()==2 && *st.begin() == 0 && a%2==0){
            b.push_back(a/2);
            b.push_back(a/2);
            cout<< b.size() <<endl;
            for(auto x: b)cout<< x << ' ';
            cout<<endl;
            return;
        }
        
    }
    cout<< -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}