#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,s=0;
    cin>>n;
    int a[200000],b[200000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        s+=a[i]*b[i];
    }
    if(s) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}