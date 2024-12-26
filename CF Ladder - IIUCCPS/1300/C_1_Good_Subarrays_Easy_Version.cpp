#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),v;
    for(int &i: a)cin>>i;
    int reset = 0;
    for(int i=0;i<n;){
        int j = i;
        int vv = 1;
        while(j<n){
            if(a[j]>=vv){
                reset++,vv++;
            }
            else break;
            j++;
        }
        
        //cout<<endl<<endl;
        if(i+1!=j){
            i=j-1;
            v.push_back(reset);
        }
        else i++;
        //cout<< i << '-' << j << ' ' << reset <<endl<<endl;
        reset = 0;
    }
    int ans = 0, rem = n - v.size();
    for(auto x:v){
        ans += (x * (x+1))/2;
        ans--;
    }
    cout<< ans +rem <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}