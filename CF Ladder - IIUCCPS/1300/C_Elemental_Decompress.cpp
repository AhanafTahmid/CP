#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
1
12
6 11 10 7 4 10 12 8 11 7 12 9

YES
6 11 10 7 4 3 12 8 2 5 1 9
6 2 3 5 4 10 1 8 11 7 12 9

void solve(){
    int n;cin>>n;
    vector<pair<int, int>>a,e;
    vector<int>b(n),c(n),d;
    set<int>st;
    map<int,int>mp,mp2;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back({x,i});
        mp[x]++;
    }
    e = a;
    sort(a.begin(),a.end());
    iota(b.begin(),b.end(),1);

    for(int i=0;i<n;i++){
        bool ok = a[i].first == b[i];
        if(st.count(a[i].first)==0 && !ok){
            //a[i].first
            st.insert(a[i].first);
        }
        //else c[i] = a[i].first;
    }

    for(int i=1;i<=n;i++){
        if(st.count(i)==0)d.push_back(i),cout<< i << ' ';
    }
    cout<<endl;

    int j = 0;
    // for(int i=0;i<n;i++){
    //     if(c[i]==0){
    //         c[i] = d[j];
    //         j++;
    //     }
    // }

    for(int i=0;i<n;i++)cout<< b[i] << " \n"[i==n-1];
    for(int i=0;i<n;i++)cout<< c[i] << " \n"[i==n-1];
    cout<<endl;

    vector<pair<int, array<int, 2> >>vp;

    for(int i=0;i<n;i++){
        vp.push_back({a[i].second,{b[i], c[i]}});
    }
    sort(vp.begin(),vp.end());

    bool ok = 1;
    for(int i=0;i<n;i++){
        if(e[i].first != max(vp[i].second[0], vp[i].second[1])) ok = 0;
    }
    for(auto [x,y]: mp) if(y>=3) ok = 0;
    if(!ok){
        cout<< "NO" <<endl;
        return;
    }

    // cout<<"YES"<<endl;
    // for(int i=0;i<n;i++)cout<< vp[i].second[0] << " \n"[i==n-1];
    // for(int i=0;i<n;i++)cout<< vp[i].second[1] << " \n"[i==n-1];
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}