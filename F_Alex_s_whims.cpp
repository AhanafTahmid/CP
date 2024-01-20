#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<n;i++){
        cout<<i<<" "<<i+1<<endl;
    }
    int d = n-1;
    while(q--){
        int x;
        cin>>x;
        if(d==x){
            cout<<"-1 -1 -1"<<endl;
        }
        else{
            cout<<n<<" "<<d<<" "<<x<<endl;
            d = x;
        }
    }

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}