#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int power(int a,int b){
    int ans = 1;
    while(b>0){
        if(b&1) ans*=a;
        a = a*a;
        b>>=1;
    }
    return ans;
}

void solve(){

    int a,b,l;cin>>a>>b>>l;

    int xx = 1, yy = 1;

    int tmp = 0;
    while(1){
        tmp = power(a,xx);
        if(tmp>l)break;
        xx++;
    }

    tmp = 0;
    while(1){
        tmp = power(b,yy);
        if(tmp>l)break;
        yy++;
    }

    set<int> st;
    for(int i=0;i<=xx;i++){
        for(int j=0;j<=yy;j++){
            int v = power(a,i) * power(b,j);
            if(l%v==0) st.insert(v);
        }
    }

    cout<< st.size() <<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}