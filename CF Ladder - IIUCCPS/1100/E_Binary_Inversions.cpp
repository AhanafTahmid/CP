#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int calc(string s){
    int ct = 0;
    string tmp;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            tmp = s.substr(i);
            bitset<20050>bset(tmp);
            if(bset.count()==0)continue;
            else ct+=(tmp.size() - bset.count());
        }
    }
    return ct;
}

void solve(){
    int n;cin>>n;
    string s="";
    int f0 = 0,f = 0;
    int l1 = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0 && f==0) f0 = i,f=1;
        if(x==1) l1 = i;
        s+=to_string(x);
    }

    int ct = 0, ct2 = 0,ct3 = 0;

    //without changing anything
    string ss = s;
    ct = calc(ss);
    //first 0 to 1
    ss = s;
    ss[f0] = '1';
    ct2 = calc(ss);
    //last 1 to 0
    ss = s;
    ss[l1] = '0';
    ct3 = calc(ss);

    cout<< max({ct,ct2,ct3}) <<endl;

    

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}