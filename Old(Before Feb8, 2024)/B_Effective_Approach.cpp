#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    // ll n,s1=0,s2=0;
    // int i;
    // int p[100000];
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     int v;
    //     cin>>v;
    //     p[v] = i;
    // }
    // int q;
    // cin>>q;
    // for(i=1;i<=q;i++){
    //     int qq;
    //     cin>>qq;
    //     s1+=p[qq];
    //     s2+=(n+1-p[qq]);
    // }
    // cout<<s1<<" "<<s2<<endl;



    int n;
    cin>>n;
    map<int,int> mp;
    map<int,int> mp2;
    int ar[300000];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        mp.insert({ar[i],i});
        mp2.insert({ar[i],n-i+1});
    }   
    int q;cin>>q;
    int qr[500000];
    long long s1 = 0, s2 = 0;
    int xx;
    for(int i=1;i<=q;i++){
        cin>>xx;
        s1+=mp[xx];
        s2+=mp2[xx];
        //cout<<mp[xx]<<endl;
    }      
    
    cout<<s1<<" "<<s2<<endl;
    // for(auto x:mp2) {
    //    // cout<<x.first<<" "<<x.second<<endl;
    // }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}