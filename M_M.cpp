#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    //string s = to_string(n);
    int l = s.size();
    while(s[s.size()-1]=='0') s.pop_back();
    for(int i=0;i<l/2+1;i++){
        if(s[i]!=s[s.size()-i-1]){
            cout<<"No"<<endl;
            return;
        }
        }
    cout<<"Yes"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}