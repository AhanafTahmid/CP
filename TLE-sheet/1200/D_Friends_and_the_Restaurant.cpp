#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>spend(n);
    vector<int>budget(n);
    for(int i=0;i<n;i++){
        cin>>spend[i];
    }
    vector<int>val(n);
    for(int i=0;i<n;i++){
        cin>>budget[i];
        val[i] = (budget[i] - spend[i]);
    }
    sort(val.begin(),val.end(),greater<int>());
    int l = 0, r = n-1, ans = 0;
    while(l<r){
        int v = val[l] + val[r];
        //cout<<v<<" "<<l<<" "<<r<<endl;

        if(v>=0){
            l++;
            r--;
            ans++;
        }
        else{
            r--;
        }
        
    }
    // for(auto x: val)cout<<x<<" ";
    // cout<<endl;
    cout<<ans<<endl;


}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}