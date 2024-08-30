#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), v;
    map<int, int> mp;
    set<int> st;
    set<int, greater<int> > st2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp [ a[i] ] = i;
        st.insert(a[i]);
    }
    int sz = mp.size();
    for(int i=0;i<n;i++){
        int x = a[i];
        
        int mx = 0;
        int mn = 0;
        if(!st.empty())mx = *st.rbegin(), mn = *st.begin();

        if( st.count(x)  && v.size()%2==0 && v.size() != sz ){
            if( mp[x] == i ){
                int now = 0;
                if(!st2.empty()) now = *st2.begin();
                if( x < now ){
                    st2.erase(now);
                    st.erase(now);
                    v.push_back(now);
                }
                else{
                    v.push_back(x);
                    st.erase(x);
                }
            }
            else{
                st2.insert(x);
            }
        }
        else if(st.count(x) && v.size()%2==1 && v.size() != sz){
            if( mp[x] == i ){
                int now = 0;
                if(!st2.empty()) now = *st2.rbegin();
                if( x > now ){
                    st2.erase(now);
                    st.erase(now);
                    v.push_back(now);
                }
                else{
                    v.push_back(x);
                    st.erase(x);
                }
            }
            else{
                st2.insert(x);
            }

        }
    }
    cout<< v.size() <<endl;
    for(auto x: v)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}