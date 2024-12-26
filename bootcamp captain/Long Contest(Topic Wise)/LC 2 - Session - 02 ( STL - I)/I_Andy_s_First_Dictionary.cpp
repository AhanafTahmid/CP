#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    char ch;
    string s="";
    set<string> st;
    while(scanf("%c",&ch)!=EOF){
        if(ch>=65 && ch<=90) ch^=(1<<5);
        if((ch>=97 && ch<=122))s+=ch;
        if(!(ch>=65 && ch<=90) && !(ch>=97 && ch<=122)){
            //cout<< s <<endl;
            if(!s.empty())st.insert(s);
            s="";
        }
    }

    for(auto x: st)cout<<x<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}