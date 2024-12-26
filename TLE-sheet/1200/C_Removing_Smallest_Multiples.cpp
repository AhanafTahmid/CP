#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> li;
    for(int i=0;i<n;i++){
        int x; scanf("%1d",&x);
        a.push_back(x);
        if(!a[i])li.push_back(i+1);
    }
    

    long long ans = 0;
    //simple sieve
    for(int x: li){
        for(int i=x-1;i<n;i+=x){
            //if you have already visited then continue
            if(a[i]==-1) continue;
            //if not visited once
            else if(a[i]!=-1 && !a[i])ans+=x,a[i]=-1;
            else if(a[i]) break;
            //cout<<a[i]<<" "<<i<<" "<<ans<<endl;
            
        }
        //cout<<endl;
    }
    cout<<ans<<endl;




}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}