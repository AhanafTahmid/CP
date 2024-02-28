#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int one = 0, two = 0, three = 0, sum = 0; 
    for(int i=0;i<n;i++){
        int x; cin>>x;
        sum+=x;
        if(x%3==1) one = x;
        else if(x%3==2) two = x;
    }
    if(!(sum%3)) cout<< 0 <<endl;
    else if(( (sum-one)%3 ==0) || (sum-two)%3==0 || (sum+1)%3==0) cout<< 1 <<endl;
    else cout<< 2 <<endl;
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}