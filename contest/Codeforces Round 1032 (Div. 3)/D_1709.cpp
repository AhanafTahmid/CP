#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), b(n);
    vector<array<int, 2>> c;
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;

    for(int i=0;i<n;i++){
        if( a[i] > b[i]){
            c.push_back({3, i+1});
            swap(a[i], b[i]);
        }
        // cout<< a[i] << " ";
        // cout<< b[i] << endl;
    }

    map<int, int>posa, posb;
    for(int i=0;i<n;i++){
        posa[a[i]] = i;
        posb[b[i]] = i;
    }

    int ct = 1;
    for(int i=0;i<n;i++){
        //cout<< a[i] << " ";
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                c.push_back({1, j+1});
            }
        }
    }
    //cout<< ct <<endl;

    for(int i=0;i<n;i++){
        for(int j = 0; j < n-1; j++){
            if(b[j] > b[j+1]){
                swap(b[j], b[j+1]);
                c.push_back({2, j+1});
            }
        }
    }

    // cout<< ct <<endl;
    cout << c.size() << endl;
    for(auto &x: c) cout<< x[0] << " " << x[1] << endl;
    //cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}