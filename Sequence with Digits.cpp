#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b;
    cin>>a>>b;
    b--;
    int mn = 0;
    int mx = 9;
    ll val = a;
    
    while(b--){
        string s = to_string(val);
        sort(s.begin(),s.end());
        mn = s[0]-'0';
        mx = s[s.size()-1]-'0';

        val = (val + (mn * mx));
        if(mn==0 || mx==0){
            cout<<val<<endl;
            return;
        }
    }
    cout<<val<<endl;


}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}