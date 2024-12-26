#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l = 2, r = 999;
    for(int i=0;i<7;i++){
        int m1 = l + (r - l) / 3;
        int m2 = l + (r - l) * 2 / 3;
        printf("? %lld %lld\n",m1,m2);
        int s;cin>>s;
        if( m1 * m2 == s){
            l = m2 + 1;
        }
        else if( m1 * (m2+1) == s){
            l = m1+1;
            r = m2;
        }
        else{
            r = m1;
        }
    }
    cout<< "! " << l <<endl;
    cout<<flush;  
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}