#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<vector<int>, int>>vc;
    vector<vector<int>>vc2;
    int mxx = 0;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        vector<int>tmp;
        int mx = 0;
        for(int j=0;j<k;j++){
            int x;cin>>x;
            tmp.push_back(x);
            if(mx<x-j){
                mx = x-j;
            }
        }
        mxx=max(mx, mxx);
        vc.push_back({tmp,mx});
    }
    sort(vc.begin(),vc.end(), [](pair<vector<int>, int>a, pair<vector<int>, int>b){
        return a.second < b.second;;
    });
    
    for(int i=0;i<n;i++){
        vector<int>tmp;
        for(int j=0;j<vc[i].first.size();j++){
            tmp.push_back(vc[i].first[j]);
        }
        vc2.push_back(tmp);
    }

    // for(int i=0;i<n;i++){
    //         cout<< vc2[i].size() << " = ";
    //         for(int j=0;j<vc2[i].size();j++){
    //             cout<< vc2[i][j] << ' ';
    //         }
    //         cout<<endl;
    //     }

    int l = 0, r = mxx+100,m;
    while(l+1<r){
        m = (l+r)>>1;
        bool ok = 0;
        int p = m;
        for(int i=0;i<n;i++){
            for(int j=0;j<vc2[i].size();j++){
                if(vc2[i][j]>=p){
                    ok = 1;
                    break;
                }
                else p++;
            }
            if(ok)break;
        }
        if(ok) l = m;
        else r = m;
    }
    cout<< r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}