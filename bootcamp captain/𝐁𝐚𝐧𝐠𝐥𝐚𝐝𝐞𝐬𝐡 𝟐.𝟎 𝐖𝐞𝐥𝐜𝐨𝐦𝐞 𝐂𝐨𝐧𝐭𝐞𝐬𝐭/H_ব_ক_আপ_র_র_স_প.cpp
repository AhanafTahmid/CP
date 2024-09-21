#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int a,int b,int c, int d) {
    int v = min({a/3, b/2, c/2});
    int ans = v*7;
    a-= v * 3;
    b-= v * 2;
    c-= v * 2;
    int i = d;
    while(1){
        i = i%7;
        if(i == 0 || i==5){
            if(c==0) break;
            c--;
        }
        else if( i==2 || i==3 || i == 6){
            if(a==0)break;
            a--;
        }
        else if( i==1 || i== 4){
            if(b==0) break;
            b--;
        }   
        ans++;
        i++;
    }
    return ans;
}

void solve(){
    int a,b,c;cin>>a>>b>>c;
    int mx = 0;
    for(int i=0;i<7;i++){
        mx = max(mx, f(a,b,c,i));
    }
    cout<< mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}