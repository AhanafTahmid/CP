#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int p(int x){
    return (x && !(x & (x - 1)));
}

void solve(){
    int n;cin>>n;
    int k = 0;
    if(p(n-1)){
        cout<< n <<endl;
        for(int i=1;i<=n;i++)cout<< i << " \n"[i==n];
    }
    else{
        int pp = 1, ppp = 1;
        while(pp*2<=n)pp<<=1;
        while(ppp<=n)ppp<<=1;
        //cout<< ppp - 1 <<endl;
        int l = n - (n%2==0);
        //cout<< pp << ' ' << l << ' ';
        vector<int>a;
        int k = 0;
        a.push_back(pp);
        a.push_back(l);
        for (int i = 1; i <= n; i++){
            if( i!= l && i!= pp) a.push_back(i);
        }

        for(int i=1;i<=n;i++){
            if(i&1) k&=a[i-1];
            else k|=a[i-1];
        }
        //cout<<endl;
        cout<< k <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}