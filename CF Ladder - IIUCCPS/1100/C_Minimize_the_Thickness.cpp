#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    int sum = 0;

    for(int &i: v)cin>>i,sum+=i;
    vector<int> a;
    for(int i = 1; i*i <= sum; i++){
        if(sum % i == 0){
            a.push_back(i);
            if(i != sum/i)a.push_back(sum/i);;
        }
    }
    sort(a.begin(),a.end());

    vector<int>an;
    int ans = 0;
    int k = 0, j, tmp = 0, answer = 1000000LL;
    for(int i=0;i<a.size();i++){
        k = 0;
        tmp = 0;
        for(j=0;j<n;j++){
            k++;
            tmp+=v[j];
            if(tmp>a[i])break;
            if(tmp==a[i]){
                ans = max(ans, k);
                k = 0;
                tmp = 0;
            }
        }
        if(j==n){
            answer = min(ans, answer);
            ans = 0;
        }
    }
    cout<< answer <<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}