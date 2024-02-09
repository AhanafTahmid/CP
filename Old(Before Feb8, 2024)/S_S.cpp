#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,c=0;
    cin>>n>>k;
    int ar[100000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[k-1]<=ar[i] && ar[i]!=0) c++;
    }
    cout<<c<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}