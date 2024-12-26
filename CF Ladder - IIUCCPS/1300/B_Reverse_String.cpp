#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s,t;cin>>s>>t;
    int n = s.size(), m = t.size();
    set<int>st{2};
    for(auto x: st){
        string tmp = "", tmp2="";
        int pt = 
        for(int i=x;i<n;i++){
            tmp2+=s[i];
            if(tmp2.back())
            if(tmp == t){
                cout<<"YES"<<endl;
                return;
            }
            for(int j=i-1;j>=0;j--){
                tmp+=s[j];
                if(tmp == t){
                    cout<<"YES"<<endl;
                    return;
                }
                else if(tmp.size()>t.size()){
                    tmp="";
                    break;
                }
            }
            cout<< tmp <<endl;

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