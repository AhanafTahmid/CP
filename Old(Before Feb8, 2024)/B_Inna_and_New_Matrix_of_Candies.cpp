#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    set<int>st;

    for(int i=1;i<=n;i++){
        int gc = 0;
        int sc = 0;
        for(int j=1;j<=m;j++){
            //cout<<i<<" "<<j<<endl;
            char c;
            cin>>c;
            if(c=='G'){
                gc = j;
            }
            else if(c=='S'){
                sc = j;
            }

            if(gc && sc && gc<sc){
                st.insert(sc-gc-1);
            }
        }
    }

    vector<int> ans(st.begin(),st.end());
    sort(ans.begin(),ans.end(),greater<int>());
    if(st.size()==0) cout<<-1<<endl;
    else cout<<ans[0]<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}