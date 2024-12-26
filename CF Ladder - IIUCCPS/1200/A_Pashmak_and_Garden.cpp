#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
    set<int> st({abs(x1),abs(y1),abs(x2),abs(y2)});
    if(st.size()>=3)cout<< -1 <<endl;
    else{
        int a = *st.begin();
        int b = *--st.end();
        vector<pair<int, int>> vp = { {a,a}, {b,b}, {a,b}, {b,a} };
        for(auto [x,y]: vp){
            if( (x==x1 && y==y1) || (x==x2 && y==y2))continue;
            cout<< x <<' '<<y<<' ';
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}