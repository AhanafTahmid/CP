//
#include <bits/stdc++.h>
using namespace std;
#define LOOP(i,n) for(int i=0;i<n;i++)

void solve(){
    int a,b;
    cin>>a>>b;
    vector<string> s(b);
    LOOP(i,b) cin>>s[i];
    sort(s.begin(),s.end());
    LOOP(i,b)cout<<s[i]<<endl;
}

int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}
