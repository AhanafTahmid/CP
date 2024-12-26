#include <bits/stdc++.h>
using namespace std;
void solve(){
    // int n;
    // cin>>n;
    // vector<int> ar(n);
    // int s=0;
    // for(int i=0;i<n;i++){
    //     cin>>ar[i];
    //     //ar.push_back(ar[i]);
    //     s+=ar[i];
    // }
    // int s2 = 0,ans=0;
    // sort(ar.begin(),ar.end(),greater<int>());
    // for(int i=0;i<n;i++){
    //     if(s<s2){break;}
    //     else{
    //         s-=ar[i];
    //         s2+=ar[i];
    //         ans++;
    //         //cout<<s<<endl;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     //cout<<ar[i];
    // }
    // cout<<ans<<endl;



    int n;
    cin>>n;
    int ar[1000];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar,ar+n);
    int s1=0;
    int c = 0;
    for(int i=n-1;i>=0;i--){
        s1+=ar[i];
        sum-=ar[i];
        c++;
        if(sum<s1){
            cout<<c<<endl;
            return;
        }
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}