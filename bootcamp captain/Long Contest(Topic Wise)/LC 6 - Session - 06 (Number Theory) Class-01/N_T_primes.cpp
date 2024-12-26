#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 10000100;
bool primes[lim];
set<int> st;
void t_primes(){
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
        }
    }
    for(int i=2;i<=1000010;i++){
        if(!primes[i])st.insert(i*i);
    }

}

void solve(){
    t_primes();
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(st.count(x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}