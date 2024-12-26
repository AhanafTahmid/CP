#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
	string s;cin>>s;
	int ln = s.size();
    int mx = 0, ct = 0;
	for(int i=0;i<ln;i++){
		if(s[i]!='L') mx = max(ct, mx), ct=0;
		else ct++;
	}
	mx = max(ct, mx);
	cout<< mx+1 <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}