#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 500005;
int dv[lim];

void solve(){
    int n;cin>>n;
    cout<< dv[n] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    int sum;
    for(int i=2;i<=lim;i++){
        sum = 1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                sum+=j;
                if(j != i/j && i!=j)sum+=(i/j);
            }
        }
        dv[i] = sum;
    }
    cin >> t;
    while(t--)solve(); 
    return 0;
}