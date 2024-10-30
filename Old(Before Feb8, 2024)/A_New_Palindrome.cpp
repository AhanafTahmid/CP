#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l = s.size()/2;
    set<int> a;
    for(int i=0;i<l;i++){
        a.insert(s[i]);
    }
    a.size()>=2?cout<<"YES\n":cout<<"NO\n";
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}