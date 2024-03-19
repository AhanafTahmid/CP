#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    if(is_sorted(a.begin(),a.end())){
        cout<<"YES"<<endl;
        return;
    }
    int last_val = -1;
    for(int i=0;i<n;i++){
        if(last_val <= a[i]){
            if(a[i]>=10){
                int v1 = a[i]/10;
                int v2 = a[i]%10;
                if(last_val <= v1 && v1<=v2)last_val = v2;
                else last_val = a[i];
            }
            else{
                last_val = a[i];
            }
            
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;




}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}