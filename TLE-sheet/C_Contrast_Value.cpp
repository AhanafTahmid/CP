#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }


    //3 things, one for == , one for > , one for <

    auto it = unique(a.begin(),a.end());
    a.resize(distance(a.begin(),it));

    int f = 0;
    int ans = 0;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1] && f!=1){
            f = 1;
            ans++;
            //cout<<a[i]<<endl;
        }
        else if(a[i]<a[i+1] && f!=-11){
            f = -11;
            ans++;
            //cout<<a[i]<<endl;
        }
    }
    cout<<ans+1<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}