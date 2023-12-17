#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s="";
    int n = s.size();
    int subsets = 1<<n;
    vector<string> ss;
    string me="";
    for(int i=1;i<subsets;i++){
        me="";
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                //cout<<s[j];
                me+=s[j];
            }
        }
        ss.push_back(me);
    }

    for(auto x:ss)cout<<x<<endl;

    string b = "abcde";
    vector<int> ans;
    for(auto x: ss){
        auto gg = b.find(x);
        if (gg == string::npos) {
            //cout<<x<<endl;
            //ans.push_back(x.size());
        }
    }
    //sort(ans.begin(),ans.end(),greater<int>());
    //cout<<ans[0]<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}