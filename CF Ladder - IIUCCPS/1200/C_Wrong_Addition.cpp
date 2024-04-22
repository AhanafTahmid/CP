#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int> a, c;
    string s1,s2;cin>>s1>>s2;
    int n1 = s1.size(), n2 = s2.size();

    string tmp = "", tmp2 = "";
    int v = 0, l = 0;
    for(int i=n2-1, j = n1-1;i>=0;){
        tmp+=s2[i];
        reverse(tmp.begin(),tmp.end());
        v = stoll(tmp);
        if( v >= (s1[j] - '0') && j>=0){
            a.push_back(v - (s1[j] - '0'));
            j--;
            l = j;
            i--;
            tmp = "";
        }
        else i--;
    }

    if(tmp.size()>=1)a.push_back( v );
    tmp = "";
    if(l>=0){
        for(int i=0;i<=l;i++) tmp+=s1[i];
        v = stoll(tmp);
    }
    if(tmp.size()>=1)a.push_back( v );
    reverse(a.begin(),a.end());

    
    string b="";
    for(int i=0;i<a.size();i++)b+=to_string(a[i]);

    deque<char> aa, bb;
    for(int i=0;i<s1.size();i++)aa.push_back(s1[i]);
    for(int i=0;i<b.size();i++)bb.push_back(b[i]);


    if(bb.size()>aa.size())swap(bb,aa);
    for(int i=bb.size();i<aa.size();i++) bb.push_front('0');


    //verify
    for(int i=0;i<aa.size();i++) c.push_back((aa[i] - '0')+(bb[i] - '0'));
    
    string f = "";
    for(int i=0;i<c.size();i++)f+=to_string(c[i]);
    string g = "";
    int k = 0;
    while(f[k]=='0')k++;
    for(int i=k;i<f.size();i++)g+=f[i];
    if(g!=s2)cout<< -1 <<endl;
    else cout<< stoull(b) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}