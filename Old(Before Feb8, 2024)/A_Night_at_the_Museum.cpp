#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    string ss = 'a'+s;
    int n = ss.size();
    int sum = 0;
    for(int i=0;i<n-1;++i){
        int h = abs(ss[i]-ss[i+1]);
        int t = 26-h;
        int u = 26-t;
        sum+=min(u,t);
    }
    cout<<sum<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}