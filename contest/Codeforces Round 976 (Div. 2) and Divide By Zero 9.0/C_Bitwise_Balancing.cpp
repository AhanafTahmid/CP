#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int b,c,d;cin>>b>>c>>d;
    map<tuple<int, int,int>, int> mp;
    mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 1;
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;

    int ans = 0;
    for(int i=0;i<=63;i++){
        int bb = (b & (1LL<<i))!=0;
        int cc = (c & (1LL<<i))!=0;
        int dd = (d & (1LL<<i))!=0;
        int a = mp[{bb,cc,dd}];
        cout<< bb << ' ' << cc << ' ' << dd <<endl;
        if(a==-1){
            ans = -1;
            break;
        }
        else ans |= a * (1LL << i );
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}