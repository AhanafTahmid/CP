#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+n);
    vector<int> xi;
    vector<int> yi;
    for(int i=0;i<n+n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());//increasing order
    long long s1 = 0, s2  = 0;
    for(int i=0;i<n;i++){
        if(i<n-1) s1+=abs(a[i]-a[i+1]);
        xi.push_back(a[i]);
    }

    for(int i=n;i<n+n;i++){
        if(i<n+n-1) s2+=abs(a[i]-a[i+1]);
        yi.push_back(a[i]);
    }

    cout<<abs(s1+s2)<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<xi[i]<<" "<<yi[i]<<endl;
    // }
    for(int i=0,j=n-1;i<n;i++,j--){
        cout<<xi[i]<<" "<<yi[j]<<endl;
    }



}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}