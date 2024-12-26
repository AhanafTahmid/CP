#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define all(n) n.begin(),n.end()
#define rll(n) n.rbegin(),n.rend()
#define vi vector<int>
#define pb push_back
#define forc(i, n) for(int i=0; i<n; i++)
#define ff first
#define ss second

void solve()
{
    string s;
    cin>>s;
    if(s[0] < s[2] && s[1] == '<')cout<<s<<endl;
    else if(s[0] > s[2] && s[1] == '>')cout<<s<<endl;
    else if(s[0] == s[2] && s[1] == '=')cout<<s<<endl;
    else if(s[0] > s[2])
    {
        s[1]='>';
        cout<<s<<endl;
    }
    else if(s[0] < s[2])
    {
        s[1]='<';
        cout<<s<<endl;
    }else
    {
        s[1]='=';
        cout<<s<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
     solve();
}