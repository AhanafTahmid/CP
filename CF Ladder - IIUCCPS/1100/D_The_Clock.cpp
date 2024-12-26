#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool pal(string s, int i){
    int n = s.size();
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1])return false;
    return pal(s,i+1);
}

void solve(){
    string s; cin>>s;
    int chk;cin>>chk;
    int n = s.size();
    int mhour = (s[0]-'0') * 10 +s[1] - '0';//main hours
    int mmin = (s[3]-'0') * 10 +s[4] - '0';//main minutes

    int ihour = mhour;//initial hours
    int imin = mmin;//initial minutes

    int min = chk%60;
    int hour = chk/60;

    int ans = 0;
    string tmp, t = "", t2 = "";
    for(int i=1;i<=1440;i++){
        t = "";
        t2 = "";
        if(mhour<10) t = "0";
        if(mmin<10) t2 = "0";
        tmp = t + to_string(mhour) + ":"+ t2 + to_string(mmin);
        //cout<< tmp <<endl;
        if(pal(tmp,0))ans++;
        mhour+=hour;
        mmin+=min;
        if(mmin>=60) mhour+=(mmin/60), mmin%=60;
        if(mhour>=24) mhour%=24;

        if(ihour==mhour && imin==mmin)break;
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