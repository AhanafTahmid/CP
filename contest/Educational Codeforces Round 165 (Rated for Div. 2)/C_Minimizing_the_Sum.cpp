#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int min_val(int n, vector<int>&a){
    int sum = 0;
    int sw = 0, indx = -1;
    for(int i=0;i<n;i++){
        if(i+1<n && abs(a[i]-a[i+1])>sw){
            sw = abs(a[i]-a[i+1]);
            indx = i;
        }
        sum+=a[i];
    }
    if(n>1 && indx!=-1){
        if(a[indx]>a[indx+1]){sum+=( - a[indx] + a[indx+1]),a[indx] = a[indx+1];}
        else sum += ( - a[indx+1] + a[indx]), a[indx+1] = a[indx];
    }
    return sum;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    int ans = 0;
    for(int &i: a)cin>>i,ans+=i;
    if(k==0){
        cout<< ans <<endl;
        return;
    }
    for(int i=1;i<=k;i++)ans = min_val(n, a);
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}