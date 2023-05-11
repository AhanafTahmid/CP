#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ar(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        //ar.push_back(ar[i]);
        s+=ar[i];
    }
    int s2 = 0,ans=0;
    sort(ar.begin(),ar.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(s<s2){break;}
        else{
            s-=ar[i];
            s2+=ar[i];
            ans++;
            //cout<<s<<endl;
        }
    }

    for(int i=0;i<n;i++){
        //cout<<ar[i];
    }
    cout<<ans<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}