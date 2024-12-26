#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s, url;
    vector<string> vs;
    int ct = 0;
    int n;
    vs.push_back("http://www.lightoj.com/");
    while(1){
        cin>>s;
        n = vs.size();
        if(s=="QUIT"){
            cout<<"Ignored"<<endl;
            break;
        }
        else if(s=="VISIT"){
            cin>>url;
            ct=1;
            vs.clear();
            vs.push_back("http://www.lightoj.com/");
            vs.push_back(url);
            cout<< vs[ct] <<endl;
        }
        else if(s=="BACK"){
            if(ct==0)cout<<"Ignored"<<endl;
            else ct--, cout<<vs[ct]<<endl;            
        }
        else if(s=="FORWARD"){
            if(ct==n-1)cout<<"Ignored"<<endl;
            else ct++,cout<<vs[ct]<<endl;
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;
}