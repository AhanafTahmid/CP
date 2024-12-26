#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        if((ar[i+1]-ar[i])<=k){
            cout<<ar[i+1]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}