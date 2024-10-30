#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int ase1 = 0, ase0 = 0;
    int z = 0, o = 0;
    int ctz = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')ase1 = 1, o = i;
        if(s[i]=='0' && ase0==0)z = i,ase0 = 1;
        if(s[i]=='0')ctz++;
    }   
    if(!ase1 && !ase0)cout<<n<<endl;
    else if(!ase1 && ase0 || !ase0 && ase1)cout<< 1 <<endl;
    else if(ase1 && ase0){
        cout<<abs(z - o)<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}