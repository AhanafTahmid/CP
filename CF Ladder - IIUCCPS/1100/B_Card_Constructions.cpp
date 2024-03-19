#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int sz = 100000;

void solve(){
    int n;cin>>n;

    int pr[sz]={};
    for(int i=0;i<=n;i++){
        if(i==0) pr[i] = 2;
        else{
            pr[i] = pr[i-1] + ((i+1)*2) + i;
        }

        if(pr[i]==n){ 
            cout<< 1 <<endl;
            break;
        }
        else if(pr[i]>n){
            int val = n;
            int ans = 0, lw, indx = i;
            while(1){
                lw = (lower_bound(pr,pr+indx,val) - pr);
                //cout<<val<<" "<<lw <<endl;
                if(pr[lw]==val){
                    cout<< ++ans <<endl;
                    return;
                }
                if(lw==0){
                    if(pr[lw]>val)cout<<ans<<endl;
                    else cout<< ++ans <<endl;
                    return;
                }
                val -=pr[lw-1];
                ans++;
            }
            break;
        }
    }


    

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}