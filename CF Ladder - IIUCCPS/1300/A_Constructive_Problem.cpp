#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v,tmp;
    set<int> st;
    int ind = n, mex1 = -1, mex2 = -1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back({x,i});
        st.insert(x);
    }
    tmp = v;
    sort(tmp.begin(),tmp.end());
    int k = 0;
    //find mex
    mex1 = (*--st.end()) + 1;
    for(auto x: st){
        if(k!=x){
            mex1 = k;
            break;
        }
        k++;
    }
    for(int i=0;i<n;i++){
        if(tmp[i].first>mex1){
            ind = tmp[i].second;
            st.erase(tmp[i].first);
            break;
        }
    }

    if(ind == n){
        cout<< "No" <<endl;
        return;
    }
    //find mex again
    int start = ind, end = n-1;
    for(int i=start;i<=end;i++){
        if(st.count(v[i].first)) st.erase(v[i].first);
        v[i].first = mex1;
    }
    st.insert(mex1);
    for(auto x: st)cout<< x <<endl;
    cout<<endl;
    // cout<<endl;
    //cout<< ind <<endl;
    //for(auto [x,y]: v)cout<< x << " " << y <<endl;

    mex2 = (*--st.end()) + 1;
    k = 0;
    //find mex again
    for(auto x: st){
        if(k!=x){
            mex2 = k;
            break;
        }
        k++;
    }
    // cout<< mex1 <<endl;
    // cout<< mex2 <<endl;
    if(mex1>mex2) swap(mex1,mex2);
    cout<< ((mex1+1==mex2)?"Yes":"No") <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}