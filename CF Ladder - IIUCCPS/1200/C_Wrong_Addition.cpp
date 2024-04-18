#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int> a,b,c,d;
    string s1,s2;cin>>s1>>s2;
    int n1 = s1.size(), n2 = s2.size(), sz = 0;
    for(int i=0;i<n1;i++)a.push_back(s1[i]-'0');
    for(int i=0;i<n2;i++)b.push_back(s2[i]-'0');

    for(int i=n2-1, j = n1-1;i>=0;j--){
        if(j<0) c.push_back(b[i]), i--;
        else if(b[i] >= a[j] && i!=1){
            c.push_back(b[i]-a[j]);
            i--;
            sz++;
        }
        else if(i-1>=0){
            c.push_back((b[i-1]*10 + b[i]) - a[j]);
            i-=2;
            sz+=2;
        }
    }

    string e="";
    for(int i=0;i<c.size();i++)e+=to_string(c[i]);
    
    if(e.size()>s1.size())swap(e,s1);
    for(int i=e.size();i<s1.size();i++)e+="0";
    reverse(e.begin(),e.end());

    //verify
    for(int i=0;i<s1.size();i++) d.push_back((s1[i]-'0')+(e[i]-'0'));
    
    s1 = "";
    for(auto x: d)s1+=to_string(x);

    reverse(c.begin(),c.end());
    int k = 0;
    while(c[k]==0)k++;
    if((s1==s2)) for(int i=k;i<c.size();i++) cout<< c[i];
    else cout<< -1;
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}