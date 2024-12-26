#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int l = *max_element(a.begin(),a.end()), r = 1e9, m;
    int ans = l;
    while(l+1<r){
        m = (l+r)/2;
        //cout<< m <<endl;
        bool ok = 0;
        for(int i=0;i+1<n;i++){
            
            vector<int>b(n);
            b = a;
            int op = 0;
            int mx = 0;
            for(int j=i;j+1<n;j++){
                cout<< "????";
                int t = b[j];
                int p = b[j];
                if(  b[j]<=b[j+1] ){
                    t = b[j+1] + 1;
                }
                //t = max(b[j+1] + 1, b[j]);
                op+= (t - p);
                b[j] = t;
                mx = max(mx, b[j]);
                for(int x: b) cout<< x << ' ';
                cout<< op << ' ' << mx;
                 cout<<endl;
                if(op>k){
                    break;
                }
                else if(op<=k && ans<mx){
                    //l = t;
                    //ans = max(t);
                    ok = 1;
                    break;
                }
                // for(int x: b) cout<< x << ' ';
                // cout<<endl;
            }
            //if(ok)break;
        }
        if(ok) l = m, ans = m;
        else r = m;
    }

    cout<< l <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}