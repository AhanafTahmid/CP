#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 1000000;
bool p[lim];

void solve(){
    int n;cin>>n;
    cout<< (p[n]?"no":"yes") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;

    for(int i=2;i*i<=lim;i++){
        p[0] = p[1] = 1;
        if(!p[i]){
            for(int j=i*i;j<=lim;j+=i){
                p[j] = 1;
            }
        }
    }

    cin >> t;
    while(t--)solve(); 
    return 0;
}