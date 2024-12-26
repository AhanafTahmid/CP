#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,ar[100000],fr[10000]={},f=11;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        fr[ar[i]]++;
    }
    for(int i=0;i<n;i++){
        if(fr[i]==0){
            cout<<i<<endl;
            f = 1;
            return;
        }
    }
    if(f==11) cout<<n<<endl;


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}