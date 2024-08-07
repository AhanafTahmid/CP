#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l = 1, r = 1001, m;
    for(int i=0;i<7;i++){
        m = (l+r)>>1;
        printf("? %lld %lld\n\n",1LL, m);
        int s;cin>>s;
        if(m==s)l = m + 1;
        else r = m;
        if (l == r) {
            cout << "! " << l << endl;
            cout<<flush;
            return;
        }
    }
    cout<< -1 <<endl;
    cout<<flush;
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}