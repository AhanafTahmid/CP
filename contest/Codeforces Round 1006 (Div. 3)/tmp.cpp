#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vbl;
 
#define faast	    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb          push_back
#define all(a)      a.begin(),a.end()
#define rall(a)     a.rbegin(),a.rend()
#define CY          cout<<"YES\n";
#define CN          cout<<"NO\n";
#define CYR         cout<<"YES\n";return;
#define CNR         cout<<"NO\n";return;
#define vi          vector<int>
#define vecin(a,n)  vi a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sz(n)       (int)(n).size()
#define forc(n)     for(int i=0 ; i<n ; i++)
#define ff          first
#define ss          second
#define endl        '\n'
#define Max(x)      *max_element(all(x))
#define Min(x)      *min_element(all(x))



bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.ff>p2.ff)return true;
    if(p1.ff<p2.ff) return false;
    //p1.ff==p2.ff
    if(p1.ss>p2.ss)return true;
    else return false;
}
void solve()
{
    string s;
    cin>>s;
    vector<pair<int,int>>v;
    int open=0,endd=0;
    for(int i=0;i<sz(s);i++)
    {
        if(s[i]=='(')open++;
        else endd++;
        int x=open-endd;
        v.pb({x-1,i+1});
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<sz(v);i++)
    {
        cout<< v[i].ff << " " << v[i].ss << endl;
    }
}

int main()
{
    faast
 
    int t;
    t=1;
    //cin >> t;
    while(t--)
    {
        solve();
        //Time();
    }
    return 0;
}