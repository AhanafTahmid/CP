#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[19900];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    if(n==1){
        cout<<ar[0]<<endl;
        return;
    }
    sort(ar,ar+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}