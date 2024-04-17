#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int ans = 0, ct = 0,st = 0, start = 0, end = 0, ones = 0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x;

        if(x==1){
            ct--;
            ones++;
        }
        else{
            if(ct<=0) ct = 0, st = i;
            ct++;
        }
        
        if(ans<=ct){
            ans = ct;
            start = st;
            end = i;
        }
    }

    if(ones == n)cout<< n - 1 <<endl;
    else if(ones == 0) cout<< n <<endl;
    else{
        end++;
        int cnt0 = count(a.begin()+start,a.begin()+end, 0);
        int cnt1 = count(a.begin()+start,a.begin()+end, 1);
        cout<< ones - cnt1 + cnt0 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}