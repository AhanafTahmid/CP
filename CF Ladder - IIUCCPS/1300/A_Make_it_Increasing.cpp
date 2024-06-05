#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define trav(v) for(auto x:v) cout<< x << ' '

int ceil(int a, int b){
    return (a+b-1)/b;
}

void solve(){
    int n;cin>>n;
    vector<int>a(n),tmp(n);
    for(int &i: a)cin>>i;
    vector<pair<int, int>> vp;
    int f = 0, l = -1;
    for(int i=0;i<n;i++){
        l = i;
        if(i+1<n && a[i]<a[i+1]){
            continue;
        }
        else{
            vp.push_back({f,l});
            f = i + 1;
        }
    }

    tmp = a;
    int ans = 1e9;
    for(auto [x,y]: vp){
        //dui dik loop chalano
        vector<int>b(n);
        a = tmp;

        int ct = 0;
        b[x] = a[x];
        b[y] = a[y];
        if(x!=y) ct = (y-x+1);
        else ct = 1;

        for(int i=x;i>0;i--){
            if(a[i-1] < a[i]) continue;
            if(a[i-1]/a[i] == ceil(a[i-1],a[i])){
                b[i] =  - (a[i] * (a[i-1]/a[i]) + a[i]);
                ct+= (a[i-1]/a[i]) + 1;
                a[i] = b[i];
            }
            else{
                b[i] =  - (a[i] * ceil(a[i-1],a[i]));
                ct+= ceil(a[i-1],a[i]);
                a[i] = b[i];
            }
        }
        for(int i=y;i<n-1;i++){
            if(a[i] < a[i+1]) continue;
            if(a[i]/a[i+1] == ceil(a[i],a[i+1])){
                b[i+1] = a[i+1] * (a[i]/a[i+1]) + a[i+1];
                ct+= (a[i]/a[i+1]) + 1;
                a[i+1] = b[i+1];
            }
            else{
                b[i+1] = a[i+1] * ceil(a[i],a[i+1]);
                ct+= ceil(a[i],a[i+1]);
                a[i+1] = b[i+1];
            }
            //cout<< ct <<endl;
        }

        trav(b);
        
        cout<<"  =  " << ct <<endl;
        ans = min(ans, ct);
        //cout<< ct <<endl;
    }
    //cout<< ans <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}