#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,t;
    cin>>n>>t;
    string ans = "";
    if(t==10){
        //n-1 prjnto
        if(n==1){
            cout<<-1<<endl;
            return;
        }
        for(int i=1;i<=n-1;i++){
            ans+= (1 + '0');
        }
        cout<<ans+"0"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            ans+= (t + '0');
        }
        cout<<ans<<endl;
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}