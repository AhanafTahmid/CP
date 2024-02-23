#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int ans = 1;
    int ct = 0;
    int lw = 0;
    for(int i=0;i<n;i++){
        //ct = 0;
        //while(j<n && a[i] > b[j]) ct++,j++;
        //cout<< ct <<" ";
        //j = i;
        lw = lower_bound(b.begin(),b.end(),a[i]) - b.begin();
        //if(b[lw]==a[i])lw--;
        //cout<< a[i] <<" "<<endl;
        //cout<< a[i] <<" "<<lw-i <<endl;
        ans = (ans*(lw-i))%md;
    }
    cout<< ans <<endl;


}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}